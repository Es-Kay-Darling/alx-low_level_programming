#include "main.h"

/**
 * _strlen - length of a string
 * @s: A pointer to an int that will be changed/updated
 *
 * Retrun: void that means our answer is correct
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
