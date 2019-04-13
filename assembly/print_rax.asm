section .data
codes:
    db '0123456789ABCDEF'

section .text
global _start
_start:
    mov rax, 0x1122334455667788

    mov rdi, 1 ; number of system call of "write"
    mov rdx, 1 ; file descriptor of stdout
    mov rcx, 64 ; bit

.loop:
    push rax
    sub rcx, 4 ; subtract 4
    sar rax, cl ; right shift by rcx , it's 60 bits at first.
    and rax, 0x0F ; extract first 4 bits

    lea rsi, [codes + rax] ; address of "codes" plus index(rax) equals proper character.
    mov rax, 1 ; sys_write

    push rcx
    syscall
    pop rcx

    pop rax

    test rcx, rcx
    jnz .loop

    mov rax, 60 ; sys_exit
    xor rdi, rdi
    syscall

