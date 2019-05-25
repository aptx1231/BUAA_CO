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

slot_combination:
	lui      $s0,0x8000
	lui      $s1,0x7fff
	ori      $s1,$s1,0xffff
	add     $10,$s0,$s0
	sub     $10,$s0,$s1
	addi    $10,$s1,10
	sw      $10,0x1002($0)
	sh      $10,0x1001($0)
	mult    $10,$10
	lw      $10,0x1002($0)
	lh      $10,0x1001($0)
	mult    $10,$10
	lhu      $10,0x1001($0)
	sub     $10,$s0,$s1
	addi    $10,$s1,10
	sw      $10,0x1002($0)
	sh      $10,0x1001($0)
	mult    $10,$10
	sw      $10,0x1002($0)
	sh      $10,0x1001($0)
	lw      $10,0x1002($0)
	lh      $10,0x1001($0)
	mult    $10,$10
	sh      $10,0x1001($0)
	add     $10,$s0,$s0
	sub     $10,$s0,$s1
	mult    $10,$10
	add     $10,$s0,$s0
	sub     $10,$s0,$s1
	j label_1
	add     $10,$s0,$s0
	sub     $10,$s0,$s1
label_1:
	mult    $10,$10
	add     $10,$s0,$s0
	sub     $10,$s0,$s1
	mult    $10,$10
	sh      $10,0x1001($0)
	lw      $10,0x1002($0)
	add     $10,$s0,$s0
	sh      $10,0x1001($0)
label_2:
	sub     $10,$s0,$s1
	mult    $10,$10
	sh      $10,0x1001($0)
	lw      $10,0x1002($0)
	nop

dead_loop:
	j	dead_loop
	nop