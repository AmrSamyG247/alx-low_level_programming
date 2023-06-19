#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
 *Code to inject library
 *To override Giga Millions 
*/
int printf(const char *restrict format, ...)
{
   write(1, "9 8 10 24 75 - 9\n", 17);
   write(1, "Congratulations, you win the Jackpot!\n", 37);
   exit(EXIT_SUCCESS);
}

