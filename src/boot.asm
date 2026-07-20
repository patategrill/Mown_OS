bits 32

section .multiboot
align 4

dd 0x1BADB002
dd 0
dd -(0x1BADB002) 

section .text
global start
extern kernel

start:
    mov esp, stack_top
    call kernel
    cli
    jmp .hang

.hang:
    hlt
    jmp .hang
