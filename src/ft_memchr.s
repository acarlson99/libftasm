global _ft_memchr

_ft_memchr:
	push rbp
	mov rbp, rsp
	cmp rdx, 0
	je .null
	mov rax, rdi				; ptr to return

.loop:
	cmp byte [rax], sil			; chk char
	je .ret
	cmp rdx, 0					; chk end of mem
	je .null
	dec rdx
	inc rax
	jmp .loop

.null:
	mov rax, 0

.ret:
	pop rbp
	ret
