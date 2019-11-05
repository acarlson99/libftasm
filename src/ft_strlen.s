global _ft_strlen

_ft_strlen:
	mov rax, 0

    mov rax, 0      ; compare byte for rep
    mov rcx, -1     ; counter

    repnz scasb     ; dec rcx until 0

    mov rax, rcx
    inc rax
    not rax
    ret
