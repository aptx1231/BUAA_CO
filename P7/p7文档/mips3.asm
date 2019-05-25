.ktext 0x4180	
	mfc0 $1,$13
	mtc0 $0,$12
	mflo $s2
	mfhi $s1
	ori $v1,$0,0x00007f00
	sw $a3,0($v1)
	eret

.text
	ori $t1,0x00007f00
	mult $t1,$t1
	ori $a0,0x0009
	ori $a3,0xfc01
	ori $a1,8
	sw $a1,4($t1)
	sw $a0,0($t1)
	mtc0 $a3,$12
	ori $29,0x1000
	mthi $a3
	ori $a0,0x000b
	sw $a0,0($t1)
	mthi $a3
	mfhi $a2
	ori $29,0x1000
	mult $t1,$t1
	div $a2,$a2
	lui $a0,1
