;; void			*ft_memcpy(void *dst, const void *src, size_t n);
;;                          rdi,          rsi,            rdx

global _ft_memcpy

_ft_memcpy:
	push rbp
	mov rbp, rsp
	push rdi					; ptr to return

	mov rcx, rdx				; size

	cld
	rep movsb

	pop rax
	pop rbp
	ret
