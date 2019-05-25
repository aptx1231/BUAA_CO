.ktext 0x4180	
	mfc0 $1,$13
	mflo $s2
	mfhi $s1
	ori $v1,$0,0x00007f00
	sw $a0,0($v1)
	eret
.text
	ori $t1,0x00007f00
	mult $t1,$t1
	ori $a0,0x0009
	ori $a3,0xfc01
	ori $a1,2
	sw $a1,4($t1)
	sw $a0,0($t1)
	mtc0 $a3,$12
	mult $t1,$a3
	ori $29,0x1000
	lui $v1,1
	lui $v0,2
	lui $s1,3
	lui $s0,4
