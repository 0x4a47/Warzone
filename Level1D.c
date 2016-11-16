#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void win(){
	printf("Yay, W1nner\n");
	system("/bin/sh");
}

int main()
{
	int number;
	char buffer[20];

	number = 0;

	printf("Please enter your name: ");
	//win();
	gets(buffer);

	if(number != 0 )
	{
		printf("Nice work, you have changed the 'number' variable. \nYou haven't won yet though :)\n");
	}else
		printf("Try again!\n");

	if(number == 0x41414141)
	{
		win();
	}

}
