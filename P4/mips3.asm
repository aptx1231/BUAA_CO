ori $a0,$0,1999  
ori $a1,$a0,111 
lui $a2,12345
lui $a3,0xffff
lui $t0,0xffff
beq $a3,$t0,eee
addu $s7,$0,$a0
nop
ori $a3,$a3,0xffff
addu $s0,$a0,$a1 
addu $s1,$a3,$a3
addu $s2,$a3,$s0
beq $s2,$s3,eee
subu $s0,$a0,$s2 
subu $s1,$a3,$a3
eee:
subu $s2,$a3,$a0
subu $s3,$s2,$s1
ori $t0,$0,0x0000
sw $a0,0($t0)
nop
sw $a1,4($t0)
sw $s0,8($t0)
sw $s1,12($t0)
sw $s2,16($t0)
sw $s5,20($t0)
lw $t1,20($t0)
lw $t7,0($t0)
lw $t6,20($t0)
sw $t6,24($t0)
lw $t5,12($t0)
jal end
ori $t0,$t0,1
ori $t1,$t1,1
ori $t2,$t2,2
beq $t0,$t2,eee
lui $t3,1111
jal out
end:
addu $t0,$t0,$t7
jr $ra
out:
addu $t0,$t0,$t3
ori $t2,$t0,0
beq $t0,$t2,qqq
lui $v0,10
qqq:
lui $v0,11
