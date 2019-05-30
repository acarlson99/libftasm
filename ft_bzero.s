extern _ft_memset
global _ft_bzero

_ft_bzero:
	mov rdx, rsi
	mov rsi, 0
	call _ft_memset
	ret
