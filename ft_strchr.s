global _ft_strchr

_ft_strchr:
	push rbp
	mov rbp, rsp
	mov rax, rdi				; ptr to return

.loop:
	cmp byte [rax], sil			; chk against char
	je .ret
	cmp byte [rax], 0			; chk if end
	je .null
	inc rax
	jmp .loop

.null:
	mov rax, 0

.ret:
	pop rbp
	ret
