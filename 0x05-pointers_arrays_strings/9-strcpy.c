#include "main.h"

/**
 * _strcpy - copys array from src to destination
 * @dest: where the arr is duplicates
 * @src: where arr originates
 * Return: destination array
*/

char *_strcpy(char *dest, char *src)
{
	char *pdest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (pdest);
}
