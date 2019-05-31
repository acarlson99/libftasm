global _ft_strcat
extern _ft_strlen

_ft_strcat:
	call _ft_strlen
	push rdi
	add rdi, rax
	pop rax

.loop:
	mov bl, byte [rsi]
	inc rsi
	mov byte [rdi], bl
	inc rdi
	cmp bl, 0
	jne .loop
	ret
