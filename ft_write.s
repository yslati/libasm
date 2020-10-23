section     .text
	global _ft_write
	extern ___error
_ft_write:
	mov rax, 0x02000004
	syscall
	jc return
	ret

return:
	push   rax
        call   ___error
        pop    rcx
        mov    [rax], ecx
        mov rax, -1
        ret
