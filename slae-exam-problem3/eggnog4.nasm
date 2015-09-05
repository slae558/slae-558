global _start

section .text

_start:

	pop eax

next:

	inc eax

	cmp dword [eax-0x8],0x50905090

	jne next

	cmp dword [eax-0x4],0x50905090

	jne next

	jmp eax
