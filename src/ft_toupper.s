global _ft_toupper

_ft_toupper:
	push rbp
	mov rbp, rsp
	mov eax, edi
	cmp eax, 'a'
	jae .true
	jmp .return

.true:
	cmp eax, 'z'
	ja .return
	and eax, 0x5f

.return:
	pop rbp
	ret
