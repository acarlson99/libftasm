global _ft_memset

_ft_memset:
	cmp rdx, 0
	je .end
	dec rdx
	mov byte [rdi + rdx], byte sil
	jmp _ft_memset

.end:
	mov rax, rdi
	ret
