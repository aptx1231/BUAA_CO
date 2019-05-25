.data
aa: .space 576
bb: .space 576
space: .asciiz " "
nextline: .asciiz "\n"

.text
li $v0,5
syscall
move $s0,$v0  #s0->m1
li $v0,5
syscall
move $s1,$v0  #s1->n1
li $v0,5
syscall
move $s2,$v0  #s2->m2
li $v0,5
syscall
move $s3,$v0  #s3->n2

la $t2,aa
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

la $t2,bb
li $t0,0  #i
for21:
beq $t0,$s2,out21
	li $t1,0  #j
	for22:
	beq $t1,$s3,out22
		li $v0,5
		syscall
		sw $v0,0($t2)
		addi $t2,$t2,4
		addi $t1,$t1,1
		j for22
	out22:
	addi $t0,$t0,1
	j for21
out21:

sub $s4,$s0,$s2 #m1-m2
addi $s4,$s4,1
sub $s5,$s1,$s3 #n1-n2
addi $s5,$s5,1

li $t0,0 #i
for31:
beq $t0,$s4,out31
	li $t1,0 #j
	for32:
	beq $t1,$s5,out32
		li $t2,0 #p
		move $t3,$t0 #k=i
		li $t6,0 #c-->output
		for33:
			beq $t2,$s2,out33  #p<m2
				li $t4,0 #q
				move $t5,$t1 #l=j
				for34:
					beq $t4,$s3,out34 #q<n2
						#c+=b[p][q]*a[k][l];
						mult $t2,$s3
						mflo $a0
						add $a0,$a0,$t4
						li $t7,4
						mult $a0,$t7
						mflo $a0  #4(p*n2+q)
						la $t7,bb
						add $t7,$t7,$a0 #find b[p][q]
						lw $a0,0($t7)
						
						mult $t3,$s1
						mflo $a1
						add $a1,$a1,$t5
						li $t7,4
						mult $a1,$t7
						mflo $a1  #4(k*n1+l)
						la $t7,aa
						add $t7,$t7,$a1 #find a[k][l]
						lw $a1,0($t7)
						
						mult $a0,$a1
						mflo $a0
						add $t6,$t6,$a0 #c+=b[p][q]*a[k][l];
					addi $t4,$t4,1 #q++
					addi $t5,$t5,1 #l++
					j for34
				out34:
			addi $t2,$t2,1 #p++
			addi $t3,$t3,1 #k++
			j for33
		out33:
		move $a0,$t6
		li $v0,1
		syscall
		la $a0,space
		li $v0,4
		syscall
		addi $t1,$t1,1 #j++
		j for32
	out32:
	la $a0,nextline
	li $v0,4
	syscall
	addi $t0,$t0,1 #i++
	j for31
out31:

li $v0,10
syscall