section		.text

global		_ft_list_size

_ft_list_size:
	mov		rax, 1
	mov		rcx, 8
	cmp		[rdi + rcx],byte 0
	je		_return
	jmp		_size_up

_size_up:
	mov		rcx, 16
	inc		rax
	jmp		_check_size

_check_size:
	cmp		[rdi + rcx],byte 0
	jne		_size_up
	jmp		_return

_return:
	ret
