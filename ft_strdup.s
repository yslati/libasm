section			.text

	global		_ft_strdup
	extern		_ft_strlen
	extern		_malloc
	extern		_ft_strcpy
	extern		___error

_ft_strdup:
    call		_ft_strlen
    push		rdi
	mov			rdi, rax
	inc			rdi
	call		_malloc
	cmp			rax, 0
	je			error
	pop			rsi
	mov			rdi, rax
	call		_ft_strcpy

return:
	ret

error:
	push		rax
	call		___error
	pop			rcx
	mov			[rax], rcx
	mov			rax, -1
	ret
