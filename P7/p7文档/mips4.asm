.ktext 0x4180	
	mfc0 $1,$13
	mtc0 $0,$12
	mflo $s2
	mfhi $s1
	sub $t0,$t0,$t0
	ori $v1,$0,0x00007f00
	sw $a3,0($v1)
	eret

.text
	ori $a0,1
	ori $a1,2
	lui $t0,0x7fff
	lui $t1,0x1000
	beq $a0,$a1,eee
	add $t0,$t0,$t1
	eee:
	mfc0 $1,$13
	ori $a0,111
