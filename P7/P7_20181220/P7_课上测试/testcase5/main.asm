.data
.globl TC0_BASE TC1_BASE cnt0 cnt1 cnt0_double cnt1_double
TC0_BASE: .word 0x7f00
TC1_BASE: .word 0x7f10
cnt0: .word 1
cnt1: .word 1
cnt0_double: .word 0
cnt1_double: .word 0
	
.text 
	ori	$28, $0, 0x0000
	ori	$29, $0, 0x0f00
	mtc0	$0, $12
	
	#save start address 
	ori 	$t0, $0, 0x7f00
	sw 	$t0, 0($0)
	ori 	$t1, $0, 0x7f10
	sw 	$t1, 4($0)
	
	#set SR included IM, IE, EXL
	ori 	$t0,$0, 0x0c01
	mtc0 	$t0,$12
	
	#set Timer0
	la 	$t1, TC0_BASE
	lw 	$t1, 0($t1)
	sw 	$0, 0($t1)		# disable Timer0.CTRL
	
	addiu 	$t0, $0, 0x80		# set Timer0.PRESET
	sw 	$t0, 4($t1)
	addiu 	$t0, $0, 9		# set Timer0.CTRL
	sw 	$t0, 0($t1)
	
	#set Timer1
	la 	$t1, TC1_BASE
	lw 	$t1, 0($t1)
	sw 	$0, 0($t1)		# disable Timer1.CTRL
	
	addiu 	$t0, $0, 0x40		# set Timer1.PRESET
	sw 	$t0, 4($t1)
	addiu 	$t0, $0, 9		# set Timer1.CTRL
	sw 	$t0, 0($t1)

	ori	$t0, $0, 0x0001
wait:
	lw	$k0, 8($0)
	lw	$k1,12($0)
	bne	$k0, $t0, wait
	nop
	bne	$k1, $t0, wait
	nop
	ori	$t0, $0, 0xffff
	ori	$t1, $0, 0xffff	
dead_loop:
	j	dead_loop
	nop