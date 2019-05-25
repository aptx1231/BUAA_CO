.data 
string: .space 100

.text
li $v0,5
syscall
move $s0,$v0  #s0=n

li $t0,0
la $t2,string
for1:
	beq $t0,$s0,out1
		li $v0,12  #read
		syscall
		move $a0,$v0
		sw $a0,0($t2)
		addi $t2,$t2,4
		addi $t0,$t0,1
		j for1
out1:

la $t2,string
li $t0,4
mult $s0,$t0
mflo $t3   #4*n
subi $t3,$t3,4
add $t2,$t2,$t3 #last poi   4*n-4
la $t4,string #first poi    0

li $t0,2
div $s0,$t0
mflo $t1   #xunhaun cishu n/2 

li $a0,1   #flag=1
li $t0,0
for2:
	beq $t0,$t1,out2  #i<n/2
		lw $t5,0($t2)
		lw $t6,0($t4)
		bne $t5,$t6,wrong
			addi $t4,$t4,4  #move
			subi $t2,$t2,4  #move
		addi $t0,$t0,1
		j for2
out2:
	j end
	
wrong:
	li $a0,0

end:
li $v0,1
syscall
li $v0,10
syscall