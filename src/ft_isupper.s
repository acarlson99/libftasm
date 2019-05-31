global _ft_isupper

_ft_isupper:
	push rbp
	mov rbp, rsp
	mov rax, 0
	cmp rdi, 'A'
	jae .true
	jmp .ret

.true:
	cmp rdi, 'Z'
	ja .ret
	inc rax

.ret:
	pop rbp
	ret
