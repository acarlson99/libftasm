global _ft_memset

_ft_memset:
	push rbp
	mov rbp, rsp

.loop:
	cmp rdx, 0
	je .end						; 0 bytes left to copy
	dec rdx
	mov byte [rdi + rdx], byte sil ; cp char
	jmp .loop

.end:
	mov rax, rdi
	pop rbp
	ret
