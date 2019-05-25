addu $a0,$0,$0
ori $t1,$0,1
ori $t2,$0,2
ori $t3,$0,3
addu $t4,$t1,$t2
subu $t5,$t1,$t2
jal out
addu $t3,$t4,$0

out:
ori $a0,$0,11
beq $a0,$a1,end
lui $a2,111
jr $ra
ori $a1,$0,11
end:
nop