;; void			*ft_memset(void *b, int c, size_t len);
;;                          rdi,     rsi,      rdx
	
global _ft_memset

_ft_memset:
	push rbp
	mov rbp, rsp

	mov rax, rsi				; char
	mov rcx, rdx				; len
	cld
	rep stosb					; store string 

	pop rbp
	mov rax, rdi
	ret
