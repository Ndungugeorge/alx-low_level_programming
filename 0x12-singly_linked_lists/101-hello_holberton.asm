section .data
    hello_msg db "Hello, Holberton", 0
    format db "%s", 0

section .text
    extern printf

global main
main:
    ; Prepare arguments for printf
    mov rdi, format
    mov rsi, hello_msg

    ; Call printf
    xor eax, eax        ; Clear EAX register
    call printf

    ; Exit the program
    mov eax, 0x60       ; System call number for exit
    xor edi, edi        ; Exit status 0
    syscall

