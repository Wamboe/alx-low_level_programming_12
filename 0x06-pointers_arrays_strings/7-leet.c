#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @c: string thats need to encoded
 * Description: function that encodes a string into 1337
 * Return: modified string c
*/

char *leet(char *c)
{
	char s[] = {'A', 'E', 'O', 'T', 'L'};
	int i[] = {4, 3, 0, 7, 1};

	while (*c != '\0')
	{
		int m;

		for (m = 0; s[m] != '\0'; m++)
		{
			if (*c == s[m] || *c == (s[m] + 32))
			{
				*c = i[m] + '0';
				break;
			}
		}
		c++;
	}
	return (c);
}
