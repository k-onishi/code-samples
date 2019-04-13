section .data
message: db 'hello, world', 0x0A
msg_len: equ $-message ; size of message
num_sys_write: equ 0x01 ; number of system call of "write"
num_sys_exit: equ 0x3C ; number of system call of "exit"
stdout: equ  0x01 ; number of file descriptor

section .text
;global _start
_start: ; entry point
    mov rax, num_sys_write
    mov rdi, stdout
    mov rsi, message ; address of message
    mov rdx, msg_len
    syscall

    mov rax, num_sys_exit
    xor rdi, rdi ; exit code -> 0 at this time.
    syscall
