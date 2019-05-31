global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_memcpy

_ft_strdup:
	push rbp
	mov rbp, rsp
	mov r14, rdi				; save string to dup
	call _ft_strlen
	add rax, 1					; len to malloc
	mov r15, rax				; save strlen
	mov rdi, rax				; load len to malloc
	call _malloc
	cmp rax, 0
	je .ret						; malloc failed
	mov rdi, r14				; len
	mov rsi, r15				; string
	call _ft_memcpy

.ret:
	pop rbp
	ret
