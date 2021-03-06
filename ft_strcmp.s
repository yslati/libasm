section     	.text

    global      _ft_strcmp

_ft_strcmp:
	xor			rcx, rcx
	xor			rax, rax
	xor			rdx, rdx
	cmp			rsi, 0
	je			error
	cmp			rdi, 0
	je			error

compare:
	mov			dl, BYTE[rsi + rcx]
	cmp			BYTE[rdi + rcx], dl
	jne			return

counter:
	inc			rcx

check:
	cmp			BYTE[rdi + rcx], 0
	je			return
	cmp			BYTE[rsi + rcx], 0
	je			return
	jmp			compare

return:
	mov			al, BYTE[rdi + rcx]
	mov			dl, BYTE[rsi + rcx]
	sub			rax, rdx
	cmp			rax, 0
	jg			grea
	jl			less
	ret

less:
	mov			rax, -1
	ret
grea:
	mov			rax, 1
	ret

error:
	mov			rax, -1
	ret
