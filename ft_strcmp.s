section     .text
global      _ft_strcmp

_ft_strcmp:
    xor     rcx, rcx
    xor     rax, rax
    xor     rdx, rdx
    cmp     rsi, 0
    je      error
    cmp     rdi, 0
    je      error

compare:
    mov     dl, BYTE[rsi + rcx]
    cmp     BYTE[rdi + rcx], dl
    jne     return

counter:
    inc     rcx

return:
    mov     al, BYTE[rdi + rcx]
    mov     dl, BYTE[rsi + rcx]
    sub     rax, rdx
    ret

error:
    mov     rax, -1
    ret


check:
    cmp     BYTE[rdi + rcx], 0
    je      return
    cmp     BYTE[rsi + rcx], 0
    je      return
    jmp     compare