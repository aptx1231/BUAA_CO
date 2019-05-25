.data
a: .space 100
.text
ori $t0,$0,111
ori $t2,$0,123
ori $a3,$a3,65535
lui $a1,100
ori $a1,$0,1111
nop
loop:
beq $t3,$t2,end
ori $t4,1
lui $s6,100
addu $t3,$t3,$t4
addu $t3,$t2,$0
lw $s0,4($t1)
out:
addu $t2,$t2,$t1
subu $t3,$t2,$0
beq $t3,$t2,loop
end:
lui $v0,11111
