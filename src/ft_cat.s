global _ft_cat

_ft_cat:
	push rbp
	mov rbp, rsp
	mov r10, rdi

.read:
	mov rax, 0x2000003			; sys_read
	mov rdi, r10				; fd
	lea rsi, [rel info]			; buf
	mov rdx, 2048				; size
	clc
	syscall

	jc .ret
	cmp rax, 0
	je .ret

	mov rdx, rax				; size
	mov rax, 0x2000004			; sys_write
	lea rsi, [rel info]			; buf
	mov rdi, 1					; fd
	syscall

	jmp .read

.ret:
	pop rbp
	ret

section .bss
	info resb 2048
