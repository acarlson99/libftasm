global _ft_strcat
extern _ft_strlen

_ft_strcat:
	push rbp
	mov rbp, rsp

	push rdi
	push rdi
	call _ft_strlen
	pop rdi
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
