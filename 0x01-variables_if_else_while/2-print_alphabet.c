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
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
