global _ft_cat
extern _ft_puts

_ft_cat:
	mov r10, rdi

.read
	mov rax, 0x2000003			; sys_read
	mov rdi, r10				; fd
	mov rsi, info				; buf
	mov rdx, 2048				; size
	syscall

	mov rdx, rax				; size

	cmp rax, 0
	je .ret

	mov rax, 0x2000004			; sys_write
	mov rsi, info				; buf
	mov rdi, 1					; fd
	syscall

	jmp .read

.ret:
	ret

section .bss
	info resb 2048
