extern _ft_memset
global _ft_bzero

_ft_bzero:
	push rbp
	mov rbp, rsp

	mov rdx, rsi				; len
	mov rsi, 0					; char
	call _ft_memset

	pop rbp
	ret
