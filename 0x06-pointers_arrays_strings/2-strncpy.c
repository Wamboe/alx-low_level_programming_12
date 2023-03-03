#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: the array where the src array is copied to
 * @src: array to be copied;
 * @n: how many word to add to destination
 *
 * Description: function that copies a string.
 * Return: new destination array
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
		{
			break;
		}
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
