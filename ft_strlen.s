global _ft_strlen

_ft_strlen:
	push rbp
	mov rbp, rsp
	mov rax, 0

.iter:
	cmp byte [rax + rdi], 0		; end of string?
	je .ret
	inc rax
	jmp .iter

.ret:
	pop rbp
	ret
