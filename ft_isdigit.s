global _ft_isdigit

section .text
	
_ft_isdigit:
	mov eax, 0
	cmp edi, '0'
	jae .digit
	jmp .return

.digit:
	cmp edi, '9'
	ja .return
	inc eax

.return:
	ret
