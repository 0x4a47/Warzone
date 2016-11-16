#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void win()
{
	system("/bin/sh");
}

void print_name(char* input)
{
	char buf[15];
	strcpy(buf, input);
	printf("Hello %s\n", buf);
}

int main(int argc, char** argv)
{
	if(argc != 2)
	{
		printf("usage:\n%s string\n", argv[0]);
		exit(1);
	}

	print_name(argv[1]);

	return 0;
}
