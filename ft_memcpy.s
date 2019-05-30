global _ft_memcpy

_ft_memcpy:
	cmp rdx, 0
	je .end
	dec rdx
	mov bh, byte [rsi + rdx]
	mov byte [rdi + rdx], bh
	jmp _ft_memcpy

.end:
	mov rax, rdi
	ret
