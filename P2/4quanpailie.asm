.data
symbol: .space 32
array: .space 32
nextline: .asciiz "\n"
space: .asciiz " "

.text
main:
li $v0,5
syscall
move $s0,$v0
li $a1,0  #a1--index

li $t0,0 
li $t1,8
initial:  #chushihua symbol
beq $t0,$t1,outinit  #i<8
	#la $t2,array
	la $t4,symbol
	li $t3,4
	mult $t0,$t3
	mflo $t3  #4*i
	#add $t2,$t2,$t3  #array[i]
	#sw $0,0($t2)  #array[i]=0
	add $t4,$t4,$t3  #symbol[i]
	sw $0,0($t4)  #symboly[i]=0
	addi $t0,$t0,1
	j initial
outinit:

#sw $a1,0($sp)  #index
#subi $sp,$sp,4
#sw $ra,0($sp)
#subi $sp,$sp,4
		
jal fun

#addi $sp,$sp,4
#lw $ra,0($sp)
#addi $sp,$sp,4
#lw $a1,0($sp)

li $v0,10
syscall

fun:
slt $t0,$a1,$s0  #index<n  t0=1
bne $t0,$0,next  #t0=1 j next
	li $t1,0  #t1-->i
	for:  #xunhuan shuchu
	beq $t1,$s0,out  #i<n
		la $t2,array
		li $t3,4
		mult $t1,$t3
		mflo $t3  #4*i
		add $t2,$t2,$t3  #find array[i]
		lw $t4,0($t2)
		move $a0,$t4
		li $v0,1
		syscall
		la $a0,space
		li $v0,4
		syscall
		addi $t1,$t1,1
		j for
	out:
		la $a0,nextline
		li $v0,4
		syscall
		jr $ra
		
next: #index<n  meiju
li $t1,0  #t1--i
for2:
beq $t1,$s0,out2  #i<n
	la $t2,symbol
	li $t3,4
	mult $t1,$t3
	mflo $t3  #4*i
	add $t2,$t2,$t3  #find symbol[i]
	lw $t4,0($t2)
	bne $t4,$0,wrong
		addi $t5,$t1,1  #i+1
		la $t6,array
		li $t3,4
		mult $a1,$t3  #4*index
		mflo $t3
		add $t6,$t6,$t3  #find array[index]
		sw $t5,0($t6)  #array[index]=i+1
		
		li $t3,1
		sw $t3,0($t2)   #symbol[i]=1
		
		sw $a1,0($sp)  #index
		subi $sp,$sp,4
		sw $t1,0($sp)  #i
		subi $sp,$sp,4
		sw $t2,0($sp)  #symbol[i]
		subi $sp,$sp,4
		sw $ra,0($sp)
		subi $sp,$sp,4
		
		addi $a1,$a1,1  #index+1
		jal fun
		
		addi $sp,$sp,4
		lw $ra,0($sp)
		addi $sp,$sp,4
		lw $t2,0($sp)
		addi $sp,$sp,4
		lw $t1,0($sp)
		addi $sp,$sp,4
		lw $a1,0($sp)
		
		li $t3,0
		sw $t3,0($t2)   #symbol[i]=0
	wrong:
		addi $t1,$t1,1
		j for2
out2:
jr $ra
	

