		extern	printf		; function, to be called

		section .data		; Data section, init var
msg:	db "Hello, Holberton", 0	; C string needs 0
fmt:    db "%s", 10, 0          ; The printf format, "\n",'0'

		section .text           ; Code .

		global main		; the std gcc entry point
main:				; the program for the entry point
		push    rbp		; set up stack frame, must be aligned

		mov	rdi,fmt
		mov	rsi,msg
		mov	rax,0		; or can be xor rax,rax
		call    printf		; Call C func

		pop	rbp		; restore stack

		mov	rax,0		; normal, no error, return value
		ret			; return
