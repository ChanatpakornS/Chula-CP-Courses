    .section__TEXT, __text, regular, pure_instructions
    .build_versionmacos, 14, 0, sdk_version, 14, 5
    .globl_main                                         ; -- Begin function main
    .p2align2
_main:                                                  ; @main
    .cfi_startproc
    ; %bb.0:
    sub     sp,         sp                              #32
    .cfi_def_cfa_offset32
    stp     x29,        x30,            [sp             #16]             ; 16-byte Folded Spill
    add     x29,        sp                              #16
    .cfi_def_cfaw29, 16
    .cfi_offsetw30, -8
    .cfi_offsetw29, -16
    stur    w0,         [x29                            #-4]
    str     x1,         [sp]
    adrp    x0,         l_.str@PAGE
    add     x0,         x0,             l_.str@PAGEOFF
    bl      _printf
    mov     w0                                          #0
    ldp     x29,        x30,            [sp             #16]             ; 16-byte Folded Reload
    add     sp,         sp                              #32
    ret
    .cfi_endproc
    ; -- End function
    .section__TEXT, __cstring, cstring_literals
    l_.str:                                             ; @.str
    .asciz"Hello, World\n"

    .subsections_via_symbols
