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

	ori	$8, $0, 0x0008
	ori	$9, $0, 0x000c
	
	sw	$10, 1($8)
	sw	$10, 2($8)
	sw	$10, 3($8)
	sw	$10, 4($8)
	sw	$10, -1($9)
	sw	$10, -2($9)
	sw	$10, -3($9)
	sw	$10, -4($9)
	
	sh	$10, 1($8)
	sh	$10, 2($8)
	sh	$10, 3($8)
	sh	$10, 4($8)
	sh	$10, -1($9)
	sh	$10, -2($9)
	sh	$10, -3($9)
	sh	$10, -4($9)
	
dead_loop:
	j	dead_loop
	nop