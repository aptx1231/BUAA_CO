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
	
	ori	$10, 0x0001
	lui	$11, 0xffff
	ori	$11, $11, 0xffff
	
	add	$12, $10, $8
	add	$12, $11, $9
	addi	$12, $8, 1
	addi	$12, $9, -1
	sub	$12, $8, $11
	sub	$12, $9, $10
	
	
dead_loop:
	j	dead_loop
	nop