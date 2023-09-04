    .global main
main:
    mov $arr, %esi
1:
    call readi32
    jc 2f
    mov %eax, (%esi)
    add $4, %esi
    jmp 1b

2:
    mov $arr, %esi

3:
    mov (%esi), %eax
    test %eax, %eax
    jz 4f
    call writei32
    add $4, %esi
    jmp 3b

4:
    call finish

    .bss
arr:
    .skip 4 * 100
