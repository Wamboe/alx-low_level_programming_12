#include "main.h"
#include <string.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @c: string to be capitalized
 * Description:  function that capitalizes all words of a string.
 * Return: a string that is capitalized for every string
*/
char *cap_string(char *c)
{
	char s[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int specialLen = sizeof(special) / sizeof(char);
	int i, j = 0;

	while (*(c + j) != '\0')
	{
		for (i = 0; i < specialLen; i++)
		{
			if (*(c + j) == special[i] && (*(c + j + 1) >= 'a' && *(c + j + 1) <= 'z'))
			{
				*(c + j + 1) = *(c + j + 1) - 32;
			}
		}
		j++;
	}

	return (c);
}
