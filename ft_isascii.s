global _ft_isascii

section .text

_ft_isascii:
	mov eax, 0
	cmp edi, 0
	jae .ascii
	jmp .return

.ascii:
	cmp edi, 0x7f
	ja .return
	inc eax

.return:
	ret
