    .global main
main:
    push %ebp
    mov %esp, %ebp

    push $greeting
    call puts

    xor %eax, %eax

    mov %ebp, %esp
    pop %ebp
    ret

    .section .rodata
greeting:
    .byte 'H'
    .byte 'i'
    .byte ' '
    .ascii "guy"
    .asciz "s"