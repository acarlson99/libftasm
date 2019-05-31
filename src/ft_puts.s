global _ft_puts
extern _ft_strlen

section .text

_ft_puts:
	push rbp
	mov rbp, rsp
	call _ft_strlen
	mov rdx, rax				; len
	mov rax, 0x2000004			; command
	mov rsi, rdi				; msg
	mov rdi, 0x1				; file desc
	cmp rdx, 0					; check len
	je .endl					; empty str print nl
	syscall						; write
	cmp rax, 0
	jb .ret

.endl:
	mov rax, 0x2000004			; command
	mov rsi, .msg
	mov rdx, 1					; make len 1
	mov rdi, 0x1				; file desc
	syscall
	mov rax, 10

.ret:
	pop rbp
	ret

section .data
	.msg db 0xa
