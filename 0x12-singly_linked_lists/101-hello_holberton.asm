section .data
    hello_msg db 'Hello, Holberton', 0
    format db '%s', 0

section .text
    global _start
    extern printf

_start:
    ; Prepare arguments for printf
    mov rdi, format
    mov rsi, hello_msg
    xor eax, eax        ; Clear EAX register

    ; Call printf
    call printf

    ; Exit the program
    mov eax, 60         ; System call number for exit
    xor edi, edi        ; Exit status 0
    syscall

