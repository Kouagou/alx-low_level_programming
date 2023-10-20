section .data
message:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	section .text
	extern printf
	global main
main:
	mov rsi, message
	mov rdi, fmt
	mov rax, 0
	call printf

	mov eax, 0
	ret
