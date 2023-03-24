;The write system call requires four arguments:
;rax - specifies the number of the system call, which for write is 1.
;rdi - specifies the file descriptor to write to, which for the standard output stream is 1.
;rsi - specifies a pointer to the data to be written, which in this case is the address of the msg variable.
;rdx - specifies the number of bytes to write, which is 13 in this case

;Syscalls (or interruptions) are just calls to the OS. 

section .data			; section to declare initialized data
	msg db "Hello, World",10      ; 10 = ASCII code for a new line

section .text			; section that contains the executable code of the program
	global main

main:
; using write system call to put the string to STDOUT
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 13
	syscall			; another way is to use int 0x80
; exit system call is invoked by loading 60 into rax and 0 or 1 to rdi (exit status code)
	mov rax, 60
	mov rdi, 0		
	syscall
