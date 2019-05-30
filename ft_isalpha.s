global _ft_isalpha

section .text
	
_ft_isalpha:
	mov eax, 0
	or edi, 32
	cmp edi, 'a'
	jae .alpha
	jmp .return

.alpha:
	cmp edi, 'z'
	ja .return
	inc eax

.return:
	ret
