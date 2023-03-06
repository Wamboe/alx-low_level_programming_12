#include "main.h"
#include <string.h>

/**
 * _strspn - similar to strspn()
 *
 * @s: main string to be scanned
 * @accept: string cantaining list of chars to macth
 * Description: function that gets the length of a prefix substring
 * Return: max position of all
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, max = 0;

	for (i = 0; i < strlen(accept); ++i)
	{
		for (j = 0; j < strlen(s); j++)
		{
			if (accept[i] == s[j])
			{
				if (j > max)
					max = j;
				break;
			}
		}
	}
	return (max + 1);
}
