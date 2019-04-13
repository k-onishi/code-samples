global _start

section .data
message: db 'hello, world', 0x0A
msg_len: equ $-message
section .text
_start: ; entry point
    mov rax, 0x01 ; number of system call
    mov rdi, 0x01 ; number of file descriptor
    mov rsi, message ; address of message
    mov rdx, msg_len ; size of message
    syscall

