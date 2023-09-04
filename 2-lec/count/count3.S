    .globl main
main:
    xor %eax, %eax
loop:
    add $3, %eax
    call writei32
    cmpl $20, %eax
    // mov %eax, %ecx
    // subl $20, %ecx
    jl loop
    call finish
