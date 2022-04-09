#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: Print the lower and upper alphabets on the same line
 * Return: 0
 */
int main(void)
{
int c;
char low;

for (low = 'a'; low <= 'z'; low++)
	putchar(low);
for (low = 'A'; low <= 'z'; low++)
	putchar(low);
	putchar('\n');

return (0);
}
