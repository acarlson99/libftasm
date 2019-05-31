global _ft_isalpha

section .text
	
_ft_isalpha:
	push rbp
	mov rbp, rsp
	mov eax, 0
	or edi, 32					; tolower
	cmp edi, 'a'
	jae .alpha
	jmp .return

.alpha:
	cmp edi, 'z'
	ja .return
	inc eax

.return:
	pop rbp
	ret
