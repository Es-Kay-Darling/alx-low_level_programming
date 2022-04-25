#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: stirng to use.
 *
 * Return: string.
 */

char *cap_stirng(char *s)
{
	int i = 1, j, check;

char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};
	
	if (s[i] > 96 && s[i] < 123)
		s[0] -= 32;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			j = 0;
			check = 0;
			while (check == 0 && j < 13)
			{
				if (s[i -1] == a[j])
				{
					check = 1;
				}
				j++;
			}
			if (check == 1)
			{
				s[i] -= 32;
			}
		}
		i++;
	}
return (s);
}
