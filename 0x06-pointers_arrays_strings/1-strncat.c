#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: first string
 * @src: second string to be concatinated to destination
 * @n: no. of char to add to destination string from src
 * Description: function that concatenates two strings
 * Return: a concatenated sting
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = strlen(dest);
	j = 0;

	while (n != 0)
	{
		dest[i] = src[j];

		if (src[j] == '\0')
		{
			break;
		}

		i++;
		j++;
		n--;
	}

	return (dest);
}
