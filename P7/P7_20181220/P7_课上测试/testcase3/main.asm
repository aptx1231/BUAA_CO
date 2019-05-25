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

	j	nxt1
	lw	$0, 1($0)
nxt1:
	j	nxt2
	sw	$0, 1($0)
nxt2:
	lui	$8, 0x7fff
	ori	$8, $8, 0xffff
	j	dead_loop
	addi	$10, $8, 1
	
dead_loop:
	j	dead_loop
	nop
