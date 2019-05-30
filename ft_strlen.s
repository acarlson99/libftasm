global _ft_strlen

_ft_strlen:
	mov rax, 0

.iter:
	cmp byte [rax + rdi], 0
	je .ret
	inc rax
	jmp .iter

.ret:
	ret
