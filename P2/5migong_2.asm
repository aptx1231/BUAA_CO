.data
a: .space 400
f: .space 400

.text
main:
li $v0,5
syscall
move $s0,$v0  #s0->n
li $v0,5
syscall
move $s1,$v0  #s1->m

la $t2,a
li $t0,0  #i
for11:
beq $t0,$s0,out11
	li $t1,0  #j
	for12:
	beq $t1,$s1,out12
		li $v0,5
		syscall
		sw $v0,0($t2)
		addi $t2,$t2,4
		addi $t1,$t1,1
		j for12
	out12:
	addi $t0,$t0,1
	j for11
out11:

li $v0,5
syscall
move $s2,$v0  #s2->tx
subi $s2,$s2,1
li $v0,5
syscall
move $s3,$v0  #s3->ty
subi $s3,$s3,1
li $v0,5
syscall
move $s4,$v0  #s4->px
subi $s4,$s4,1
li $v0,5
syscall
move $s5,$v0  #s5->py
subi $s5,$s5,1

la $t2,f  #initial f=0
li $t0,0  #i
for21:
beq $t0,$s0,out21
	li $t1,0  #j
	for22:
	beq $t1,$s1,out22
		sw $0,0($t2)
		addi $t2,$t2,4
		addi $t1,$t1,1
		j for22
	out22:
	addi $t0,$t0,1
	j for21
out21:

#DFS(tx,ty);
move $a1,$s2 #a1=tx
move $a2,$s3 #a2=ty
move $a0,$0 #a0=0 -->cnt
jal dfs

li $v0,1
syscall
li $v0,10
syscall

dfs:  
bne $a1,$s4,next #a1->x a2->y s4->px s5->py
	bne $a2,$s5,next
		addi $a0,$a0,1 #cnt++
		jr $ra
next:
	mult $a1,$s1
	mflo $t0
	add $t0,$t0,$a2
	sll $t0,$t0,2 #t0=4(x*m+y)
	la $t1,f
	add $t1,$t1,$t0 #find f[x][y]
	li $t2,1
	sw $t2,0($t1) #f[x][y]=1;
	
	move $t0,$a1 #t0=x
	move $t1,$a2 #t1=y
	
	li $t7,0
	li $t6,4
	for:
	beq $t7,$t6,out #i<4
		beq $t7,$0,case1
		li $t5,1
		beq $t7,$t5,case2
		li $t5,2
		beq $t7,$t5,case3
		li $t5,3
		beq $t7,$t5,case4
		
		case1:
		addi $t2,$t0,0 #t2=x   -->xx
		addi $t3,$t1,1 #t3=y+1 -->yy
		j panbie
		case2:
		addi $t2,$t0,0 #t2=x   -->xx
		addi $t3,$t1,-1 #t3=y-1 -->yy
		j panbie
		case3:
		addi $t2,$t0,1 #t2=x+1   -->xx
		addi $t3,$t1,0 #t3=y    -->yy
		j panbie
		case4:
		addi $t2,$t0,-1 #t2=x-1   -->xx
		addi $t3,$t1,0 #t3=y    -->yy
		j panbie
		
			panbie:
			slt $t4,$t2,$s0   #xx<n  t4=1
			beq $t4,$0,wrong
				sge $t4,$t2,$0  #xx>=0 t4=1
				beq $t4,$0,wrong
					slt $t4,$t3,$s1  #yy<m  t4=1
					beq $t4,$0,wrong
						sge $t4,$t3,$0   #yy>=0 t4=1
						beq $t4,$0,wrong
							#a[xx][yy]==0
							mult $t2,$s1
							mflo $t4
							add $t4,$t4,$t3
							sll $t4,$t4,2 #t4=4(xx*m+yy)
							la $t5,a
							add $t5,$t5,$t4 #find a[xx][yy]
							lw $t8,0($t5)   #t8=a[tx][ty]
							bne $t8,$0,wrong
								#f[xx][yy]==0
								la $t5,f
								add $t5,$t5,$t4 #find f[xx][yy]
								lw $t8,0($t5)   #t8=f[tx][ty]
								bne $t8,$0,wrong
									#li $t8,1
									#sw $t8,0($t5)  #f[xx][yy]=1;

									sw $t0,0($sp)
									subi $sp,$sp,4
									sw $t1,0($sp)
									subi $sp,$sp,4
									sw $t5,0($sp)
									subi $sp,$sp,4
									sw $t7,0($sp) #i
									subi $sp,$sp,4
									sw $ra,0($sp)
									subi $sp,$sp,4
									
									move $a1,$t2  #xx
									move $a2,$t3  #yy
									jal dfs       #DFS(xx,yy);
									
									addi $sp,$sp,4
									lw $ra,0($sp)
									addi $sp,$sp,4
									lw $t7,0($sp)  #i
									addi $sp,$sp,4
									lw $t5,0($sp)
									addi $sp,$sp,4
									lw $t1,0($sp)
									addi $sp,$sp,4
									lw $t0,0($sp)
									
									sw $0,0($t5)  	#f[xx][yy]=0
			wrong:
	addi $t7,$t7,1
	j for
	out:
	jr $ra