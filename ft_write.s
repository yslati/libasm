section     .text
	global _ft_write
_ft_write:
	mov rax, 0x02000004
	syscall
	jc return
	ret

return:
	mov rax, -1
	ret
