section			.text

	global		_ft_list_push_front

_ft_list_push_front:
	xor			rax, rax
	cmp			rsi, 0
	jne			do_it

return:
	ret

do_it:
	mov			[rdi], rsi
	mov			[rsi + 8], rdi
	ret
