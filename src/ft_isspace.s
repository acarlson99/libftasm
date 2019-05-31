global _ft_isspace

_ft_isspace:
	push rbp
	mov rbp, rsp
	mov rax, 0
	cmp rdi, 13
	jbe .maybe
	cmp rdi, 32
	je .true

.ret:
	pop rbp
	ret

.maybe:
	cmp rdi, 9
	jb .ret

.true:
	inc rax
	jmp .ret
