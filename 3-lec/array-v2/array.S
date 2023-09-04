print2eax:
    shl $1, %eax
    call writei32
    ret

    .global main
main:
    xor %esi, %esi
1:
    call readi32
    jc 2f
    mov %eax, arr(, %esi, 4)
    inc %esi
    jmp 1b

2:
    xor %esi, %esi

3:
    mov arr(, %esi, 4), %eax
    test %eax, %eax
    jz 4f
    call print2eax
    inc %esi
    jmp 3b

4:
    call finish

    .bss
arr:
    .skip 4 * 100
