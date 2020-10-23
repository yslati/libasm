section     .text

global      _ft_read
extern      ___error

_ft_read:
    mov     rax, 0x02000003
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
