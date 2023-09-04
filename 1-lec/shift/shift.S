    .global main
main:
    movl $0, %eax
    movw $0xfff0, %ax
    sarw $4, %ax
    call writei32
    call finish