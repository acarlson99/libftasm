global _ft_isprint

section .text

_ft_isprint:
	push rbp
	mov rbp, rsp
	mov eax, 0
	cmp edi, ' '
	jae .print
	jmp .return

.print:
	cmp edi, '~'
	ja .return
	inc eax

.return:
	pop rbp
	ret
