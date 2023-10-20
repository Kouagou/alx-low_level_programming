section .data
message db "Hello, Holberton", 0
fmt db "%s", 10, 0

section .text
extern printf
global main

main:
    mov rdi, fmt
    mov rsi, message
    mov rax, 0
    call printf

    mov eax, 60
    xor edi, edi
    syscall

