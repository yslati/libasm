    section     .text
    global      _ft_strcpy

_ft_strcpy:
    xor		rcx, rcx
    cmp     rsi, 0
    je      return
    cmp     rdi, 0
    je      return
    jmp		copy

increment:
    inc		rcx

copy:
    mov     dl, BYTE[rsi + rcx]
    mov		BYTE[rdi + rcx], dl
	cmp		BYTE[rsi + rcx], 0
    jne		increment

return:
	mov		rax, rsi
	ret
