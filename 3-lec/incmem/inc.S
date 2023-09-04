    .text
    .globl main
main:
    incl x

    .data
x:  .int 43

    .text
    mov x, %eax
    call writei32
    call finish