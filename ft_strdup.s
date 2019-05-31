global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_memcpy

extern _puts

_ft_strdup:
	push rbp
	mov rbp, rsp
	mov r14, rdi
	call _ft_strlen
	add rax, 1					; len to malloc
	mov r15, rax
	mov rdi, rax
	call _malloc
	cmp rax, 0
	je .ret
	mov rdi, r14
	mov rsi, r15
	call _ft_memcpy
	pop rbp

.ret:
	ret
