#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: Print the lowercase alphabet
 * Return: 0
 */
int main(void)
{
int n;
char low;

for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	printf("\n");

return (0);
}
