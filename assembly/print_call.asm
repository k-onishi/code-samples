section .data
msg: db 'Hello world', 0x0A
msglen: equ $-msg

section .text
global _start

print_msg:
    mov rax, 1 ; sys_write
    mov rdi, 1 ; stdout
    mov rsi, [rsp + 8] ; 1st arg
    mov rdx, [rsp + 16] ; 2nd arg
    syscall
    ret

_start:
    push msglen
    push msg
    call print_msg

    mov rax, 0x3C ; sys_exit
    xor rdi, rdi ; exit code
    syscall
