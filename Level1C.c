#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <setjmp.h>

void win(int a)
 {
 	 printf("Ahh i now have a signal");
     system("/bin/sh");
     exit(0);
 }
 int main(int argc, char **argv)
 {
     printf("Im losing SIGNAL?\n");
     if (argc != 3 || !atoi(argv[2]))
         return 1;
     signal(SIGFPE, win);
     return abs(atoi(argv[1])) / atoi(argv[2]);
 }
