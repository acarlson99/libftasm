global _ft_isalnum
extern _ft_isalpha
extern _ft_isdigit

_ft_isalnum:
	push rbp
	mov rbp, rsp
	call _ft_isdigit
	cmp eax, 0
	jne .ret
	call _ft_isalpha

.ret:
	pop rbp
	ret
