#include <stdio.h>
#include <unistd.h>
/**
 * main-prints exactly "and that pieceof art is useful"
 * -Dora Korpar,2015-10-19",
 *  followed by a new line, to the standard error.
 *  return: ALways 0(Success)
 */
int main(void)
{
	write (2,"and that pieceof art is useful\" -Dora Kopar,2015-10-19\n", 59);
	return(1);
}	
