section		.text

global		_ft_list_size

_ft_list_size:
	mov		rax, 1
	mov		rcx, 8
	cmp		[rdi + rcx], byte 0
	je		return

size_up:
	mov		rcx, 16
	inc		rax

check_size:
	cmp		[rdi + rcx],byte 0
	jne		size_up

return:
	ret
