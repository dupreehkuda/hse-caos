    .global main
x:  .word -1
    .int 0xabcdef
main:
    movswl x, %eax
    movzwl x, %eax
    call writei32
    call finish

    .data
y:  .skip 1<<20, 0xff