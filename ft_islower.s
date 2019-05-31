global _ft_islower

_ft_islower:
	push rbp
	mov rbp, rsp
	mov rax, 0
	cmp rdi, 'a'
	jae .true
	jmp .ret

.true:
	cmp rdi, 'z'
	ja .ret
	inc rax

.ret:
	pop rbp
	ret
