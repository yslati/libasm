section		.text

global  _ft_strdup

	extern  _ft_strlen
	extern  _malloc
	extern  _ft_strcpy

_ft_strdup:
    call    _ft_strlen
    mov		rbx, rdi
	mov		rdi, rax
	inc		rdi
	sub		rsp, 40
	call	_malloc
	add		rsp, 40
	cmp		rax, 0
	je		return
	mov		rsi, rbx
	mov		rdi, rax
	call	_ft_strcpy

return:
	ret
