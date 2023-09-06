    .global main
main:
    push %ebp
    mov %esp, %ebp
    push %esi

    mov $greeting, %esi

load:
    movzbl (%esi), %eax
    test %eax, %eax
    jz done

    push %eax
    call putchar
    add $4, %esp

    inc %esi
    jmp load

done:
    xor %eax, %eax

    pop %esi
    mov %ebp, %esp
    pop %ebp
    ret

    .section .rodata
greeting:
    .ascii "Hi guys"
    .byte 10
    .byte 0