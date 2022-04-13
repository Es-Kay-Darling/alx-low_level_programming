#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main  entry point
 *
 * Retunr: Always 0 (Success/correct)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		printf("\n");

	return (0);
}	
