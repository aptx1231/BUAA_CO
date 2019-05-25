.data
.globl TC0_BASE TC1_BASE cnt0 cnt1 cnt0_double cnt1_double
TC0_BASE: .word 0x7f00
TC1_BASE: .word 0x7f10
cnt0: .word 0
cnt1: .word 0
cnt0_double: .word 0
cnt1_double: .word 0
	
.text 
	ori	$28, $0, 0x0000
	ori	$29, $0, 0x0f00
	mtc0	$0, $12

	lui	$8, 0x7fff
	ori	$8, $8, 0xffff
	
	lui	$9, 0x8000
	ori	$9, $9, 0x0000
	
	lw	$10, 1($8)
	lh	$10, 1($8)
	lhu	$10, 1($8)
	lb	$10, 1($8)
	lbu	$10, 1($8)
	lw	$10,-1($9)
	lh	$10,-1($9)
	lhu	$10,-1($9)
	lb	$10,-1($9)
	lbu	$10,-1($9)
	
	sw	$10, 1($8)
	sh	$10, 1($8)
	sb	$10, 1($8)
	sw	$10,-1($9)
	sh	$10,-1($9)
	sb	$10,-1($9)
	
dead_loop:
	j	dead_loop
	nop