global _start

section .data

    msg db "Hello, World!", 0x0a
    len equ $ - msg

section .tex

_start:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, len
    int 0x80