.data
m1: .space 280
m2: .space 280
space:.asciiz  " " 
nextline: .asciiz "\n"

.text
li $v0,5
syscall
move $s0,$v0  #s0=n

la $t2,m1
	li $t0,0 #i
	for11:
	beq $t0,$s0,out11   #i==n break
		li $t1,0 #j
		for12:
		beq $t1,$s0,out12   #j==n break
			li $v0,5
			syscall
			move $a0,$v0
			sw $a0,0($t2)
			add $t2,$t2,4
			add $t1,$t1,1
			j for12
		out12:
		add $t0,$t0,1
		j for11
	out11:
	
la $t2,m2
	li $t0,0 #i
	for21:
	beq $t0,$s0,out21   #i==n break
		li $t1,0 #j
		for22:
		beq $t1,$s0,out22   #j==n break
			li $v0,5
			syscall
			move $a0,$v0
			sw $a0,0($t2)
			add $t2,$t2,4
			add $t1,$t1,1
			j for22
		out22:
		add $t0,$t0,1
		j for21
	out21:
	
li $a0,0
li $t0,0 #i
for31:
beq $t0,$s0,out31   #i==n break
	li $t1,0 #j
	for32:
	beq $t1,$s0,out32   #j==n break
		li $t2,0 #k
		li $a0,0
		for33:
		beq $t2,$s0,out33  #k==n break
			#(i,k)
			mult $t0,$s0
			mflo $t3
			add $t3,$t3,$t2   #i*n+k
			li $t4,4
			mult $t3,$t4
			mflo $t3
			la $t5,m1
			add $t5,$t5,$t3   #find the poi
			lw $t3,0($t5)
			#(k,j)
			mult $t2,$s0
			mflo $t6
			add $t6,$t6,$t1   #k*n+j
			li $t4,4
			mult $t6,$t4
			mflo $t6
			la $t5,m2
			add $t5,$t5,$t6   #find the poi
			lw $t6,0($t5)
			#sum
			mult $t6,$t3
			mflo $t7
			add $a0,$a0,$t7
		add $t2,$t2,1
		j for33
		out33:
		li $v0,1
		syscall
		li $v0,4
		la $a0,space
		syscall
	add $t1,$t1,1
	j for32
	out32:
	li $v0,4
	la $a0,nextline
	syscall
add $t0,$t0,1
j for31
out31:

li $v0,10
syscall
