section			.text
	
	global		_ft_strlen

_ft_strlen:
	xor			rcx, rcx
	cmp			rdi, 0x00
	je			return
	jmp			compare

increment:
	inc			rcx

compare:
	cmp			BYTE[rdi + rcx], 0
	jne			increment

return:
	mov			rax, rcx
	ret
