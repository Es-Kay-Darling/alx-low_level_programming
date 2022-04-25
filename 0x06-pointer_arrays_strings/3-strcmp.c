#include "main.h"

/**
 * _strcmp - compare two strings.
 * @s1: sting 1.
 * @s2: string 2.
 * Return: int.
 */

int -strcmp(char *s1, char *s2)
{
	int i = 0; cmp = 0;

	while (s1[i] != '\0' && s2[i] != '\' && cmp == 0)
	{
		cmp = s1[i] - s2[i];
		i++;
	}

	return (cmp);
}