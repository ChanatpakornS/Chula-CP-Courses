    .section__TEXT, __text, regular, pure_instructions
    .build_versionmacos, 14, 0, sdk_version, 14, 5
    .globl_max1                                         ; -- Begin function max1
    .p2align2
_max1:                                                  ; @max1
    .cfi_startproc
    ; %bb.0:
    cmp     w0, w1
    csel    w0, w0, w1, gt
    ret
    .cfi_endproc
    ; -- End function
    .globl_max2                                         ; -- Begin function max2
    .p2align2
_max2:                                                  ; @max2
    .cfi_startproc
    ; %bb.0:
    cmp     w0, w1
    csel    w0, w0, w1, gt
    ret
    .cfi_endproc
    ; -- End function
    .subsections_via_symbols
