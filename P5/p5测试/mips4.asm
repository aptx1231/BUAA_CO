ori $a1,$0,111
ori $a2,$0,112
beq $a1,$a2,end
ori $a1,$a1,111
beq $a1,$a1,out
nop
end:
nop
out:
addu $a0,$a0,$a1