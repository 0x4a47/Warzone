#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void win()
{
	printf("first is better than last\n");
	system("/bin/sh");
}

void concatenate_first_chars()
{
	struct {
		char word_buf[12];
		int i;
		char* cat_pointer;
		char cat_buf[10];
	} locals;
	locals.cat_pointer = locals.cat_buf;

	printf("Input 10 words:\n");
	for(locals.i=0; locals.i!=10; locals.i++)
	{
		// Read from stdin
		if(fgets(locals.word_buf, 0x10, stdin) == 0 || locals.word_buf[0] == '\n')
		{
			printf("Failed to read word\n");
			return;
		}
		*locals.cat_pointer = *locals.word_buf;
		locals.cat_pointer++;
	}

	locals.cat_buf[10] = '\0';
	printf("Here are the first characters from the 10 words concatenated:\n\
%s\n", locals.cat_buf);
}

int main(int argc, char** argv)
{
	if(argc != 1)
	{
		printf("usage:\n%s\n", argv[0]);
		exit(1);
	}

	concatenate_first_chars();

	printf("Not authenticated\n");
	return 0;
}
