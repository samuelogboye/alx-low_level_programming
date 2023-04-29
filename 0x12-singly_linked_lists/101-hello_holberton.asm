SECTION .data

msg: db "Hello, Holberton",0 ;message to print out
fmt: db "%s",10,0

SECTION .text

; calling printf form C program
extern printf
default rel

; declaring main lable (function) like in C program
global main

main:
	push rbp        ; save the base pointer on the stack

	mov rdi, fmt    ; set the first argument to the format string
	mov rsi, msg    ; set the second argument to the message to print
	mov rax, 0      ; clear the return value register

	; printing out the message and calling printf from C
	call printf

	; This code destroys the stack or pops the stack
	pop rbp         ; restore the base pointer from the stack

	mov rax, 0      ; set the return value to 0
	ret             ; return from the main function
