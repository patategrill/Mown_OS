bits 16
org 0x7C00

section .multiboot
align 4

dd 0x1BADB002
dd 0
dd -(0x1BADB002)

start:
    call kernel
    call keyboard
