	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 14, 0	sdk_version 14, 5
	.globl	_fibo                           ; -- Begin function fibo
	.p2align	2
_fibo:                                  ; @fibo
	.cfi_startproc
; %bb.0:
	stp	x22, x21, [sp, #-48]!           ; 16-byte Folded Spill
	.cfi_def_cfa_offset 48
	stp	x20, x19, [sp, #16]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	subs	x22, x0, #1
	b.lt	LBB0_6
; %bb.1:
	mov	x19, x0
	mov	x20, #0
	mov	w21, #1
LBB0_2:                                 ; =>This Inner Loop Header: Depth=1
	cbz	x22, LBB0_5
; %bb.3:                                ;   in Loop: Header=BB0_2 Depth=1
	sub	x0, x19, #1
	bl	_fibo
	sub	x22, x22, #2
	add	x20, x0, x20
	subs	x19, x19, #2
	b.hi	LBB0_2
; %bb.4:
	mov	x21, #0
LBB0_5:
	add	x0, x21, x20
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #16]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp], #48             ; 16-byte Folded Reload
	ret
LBB0_6:
	mov	x0, #0
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #16]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp], #48             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	.cfi_def_cfa_offset 48
	stp	x20, x19, [sp, #16]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	bl	_clock
	mov	x19, x0
	mov	w0, #1
	bl	_fibo
	mov	w0, #2
	bl	_fibo
	mov	w0, #3
	bl	_fibo
	mov	w0, #4
	bl	_fibo
	mov	w0, #5
	bl	_fibo
	mov	w0, #6
	bl	_fibo
	mov	w0, #7
	bl	_fibo
	mov	w0, #8
	bl	_fibo
	mov	w0, #9
	bl	_fibo
	mov	w0, #10
	bl	_fibo
	mov	w0, #11
	bl	_fibo
	mov	w0, #12
	bl	_fibo
	mov	w0, #13
	bl	_fibo
	mov	w0, #14
	bl	_fibo
	mov	w0, #15
	bl	_fibo
	mov	w0, #16
	bl	_fibo
	mov	w0, #17
	bl	_fibo
	mov	w0, #18
	bl	_fibo
	mov	w0, #19
	bl	_fibo
	mov	w0, #20
	bl	_fibo
	mov	w0, #21
	bl	_fibo
	mov	w0, #22
	bl	_fibo
	mov	w0, #23
	bl	_fibo
	mov	w0, #24
	bl	_fibo
	mov	w0, #25
	bl	_fibo
	mov	w0, #26
	bl	_fibo
	mov	w0, #27
	bl	_fibo
	mov	w0, #28
	bl	_fibo
	mov	w0, #29
	bl	_fibo
	mov	w0, #30
	bl	_fibo
	mov	w0, #31
	bl	_fibo
	mov	w0, #32
	bl	_fibo
	mov	w0, #33
	bl	_fibo
	mov	w0, #34
	bl	_fibo
	mov	w0, #35
	bl	_fibo
	mov	w0, #36
	bl	_fibo
	mov	w0, #37
	bl	_fibo
	mov	w0, #38
	bl	_fibo
	mov	w0, #39
	bl	_fibo
	mov	w0, #40
	bl	_fibo
	mov	w0, #41
	bl	_fibo
	mov	w0, #42
	bl	_fibo
	mov	w0, #43
	bl	_fibo
	mov	w0, #44
	bl	_fibo
	bl	_clock
	sub	x8, x0, x19
	ucvtf	d0, x8
	mov	x8, #145685290680320
	movk	x8, #16686, lsl #48
	fmov	d1, x8
	fdiv	d0, d0, d1
	str	d0, [sp]
Lloh0:
	adrp	x0, l_.str@PAGE
Lloh1:
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	mov	w0, #0
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.loh AdrpAdd	Lloh0, Lloh1
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"Time taken: %f seconds\n"

.subsections_via_symbols
