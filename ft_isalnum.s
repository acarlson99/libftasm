global _ft_isalnum
extern _ft_isalpha
extern _ft_isdigit

_ft_isalnum:
	call _ft_isdigit
	cmp eax, 0
	jne .ret
	call _ft_isalpha
	cmp eax, 100
	je _ft_isalnum

.ret:
	ret
