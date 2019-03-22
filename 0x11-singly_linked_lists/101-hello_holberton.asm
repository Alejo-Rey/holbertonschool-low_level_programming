SYS_EXIT  equ 1
SYS_WRITE equ 4
STDIN     equ 0
STDOUT    equ 1
section  .text
	global main

main:
	mov eax, SYS_WRITE
	mov ebx, STDOUT
        mov ecx, msg1
        mov edx, len1
        int 0x80

	mov eax,SYS_EXIT
	int 0x80

section  .data
msg1 db 'Hello, Holberton',10
len1 equ $ - msg1
