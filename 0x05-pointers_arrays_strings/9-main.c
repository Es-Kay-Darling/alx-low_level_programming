#include "main.h"
#include <stdio.h>

/**
 * main = where checking of codes begin
 *
 * Retrun: 0
 */
int main(void)
{
	char s1[98];
	char *p;

	p = _strcpy(s1, "First solve the problem. Then, wehn the code\n");
	printf("%s", p);
	return (0);
}

