global _ft_memcpy

_ft_memcpy:
	push rbp
	mov rbp, rsp

.loop:
	cmp rdx, 0
	je .end						; 0 bytes left to copy
	dec rdx
	mov bh, byte [rsi + rdx]	; save byte to move
	mov byte [rdi + rdx], bh	; move to dest
	jmp .loop

.end:
	mov rax, rdi
	pop rbp
	ret
