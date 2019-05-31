global _ft_strcat
extern _ft_strlen

_ft_strcat:
	push rbp
	mov rbp, rsp
	call _ft_strlen
	push rdi
	add rdi, rax				; starting index
	pop rax

.loop:
	mov bl, byte [rsi]
	inc rsi						; s++
	mov byte [rdi], bl
	inc rdi
	cmp bl, 0
	jne .loop

.ret:
	pop rbp
	ret
