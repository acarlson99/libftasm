global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_memcpy

_ft_strdup:
	push rbp
	mov rbp, rsp

	push rdi					; str
	call _ft_strlen
	push rax					; strlen

	inc rax						; len to malloc
	mov rdi, rax				; load len to malloc

	call _malloc

	cmp rax, 0
	pop rdx						; strlen
	pop rsi						; str
	mov rdi, rax
	je .ret						; malloc fail

	call _ft_memcpy

.ret:
	pop rbp
	ret
