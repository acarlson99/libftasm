global _ft_cat

_ft_cat:
	cmp rdi, 0
	jb .ret
	mov r10, rdi

.read
	mov rax, 0x2000003			; sys_read
	mov rdi, r10				; fd
	mov rsi, info				; buf
	mov rdx, 2048				; size
	syscall

	cmp rax, 0
	jbe .ret

	mov rdx, rax				; size
	mov rax, 0x2000004			; sys_write
	mov rsi, info				; buf
	mov rdi, 1					; fd
	syscall

	jmp .read

.ret:
	ret

section .bss
	info resb 2048
