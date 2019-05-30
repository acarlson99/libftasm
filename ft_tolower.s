global _ft_tolower

_ft_tolower:
	mov eax, edi
	cmp eax, 'A'
	jae .true
	jmp .return

.true:
	cmp eax, 'Z'
	ja .return
	or eax, 32

.return:
	ret
