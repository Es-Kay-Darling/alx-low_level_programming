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
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}


