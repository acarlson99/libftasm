global _ft_cat
extern _ft_puts

_ft_cat:
	mov r10, rdi

.read
	mov rax, 0x2000003
	mov rdi, r10
	mov rsi, info
	mov rdx, 26
	syscall

	cmp rax, 15
	jbe .ret

	mov rdx, 26
	mov rax, 0x2000004
	mov rsi, info
	mov rdi, 0x1
	syscall

	jmp .read

.ret:
	ret

section .bss
	info resb 26
