    .global main
main:
    movl x, %eax
    call writei32
    call finish

x: .int 43