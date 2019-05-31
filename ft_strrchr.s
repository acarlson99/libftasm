global _ft_strrchr

_ft_strrchr:
	push rbp
	mov rbp, rsp
	mov rax, 0					; counter
	jmp .loop

.pushthing:
	mov rax, rdi
	jmp .postchk				; jump back after check

.loop:
	cmp byte [rdi], sil			; chk against char
	je .pushthing

.postchk:
	cmp byte [rdi], 0			; chk if end
	je .ret
	inc rdi
	jmp .loop

.ret:
	pop rbp
	ret
