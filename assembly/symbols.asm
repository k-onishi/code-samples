section .data
data_var1: dq 10
data_var2: dq 20

section .bss
bss_var1: resb 2
bss_var2: resw 1

section .text

extern somewhere
global _start
_start:
    mov rax, data_var1
    mov rax, data_var2

    jmp _start
    ret
text_label: db 0
