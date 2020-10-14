section		.text

global		_ft_list_sort

_ft_list_sort:
	xor		rax, rax
	cmp		[rdi], byte 0
	je		_return
	mov		rcx, rsi
	mov		rbx, [rdi]
	jmp		_do_it

; rbx rah list
; [rbx] rah list->data
; [rbx + 8] rah list->next

_mov_it:
	mov		rdx, [rbx]
	mov		rsi, [rbx + 8]
	mov		rbx, [rsi]
	mov		[rbx], rdx
	mov		rbx, [rbx + 8]

_compare:
	cmp		rbx, 0
	je		_return
	;mov		rbx, [rbx + 8]

_do_it:
	mov		rdi, [rbx]
	mov		rsi, [rbx + 8]
	mov		rsi, [rsi]
	push	rbx
	push	rcx
	call	rcx
	pop		rcx
	pop		rbx
	cmp		rax, 0
	jg		_mov_it
	;mov		rbx, [rbx + 8]

_return:
	ret
