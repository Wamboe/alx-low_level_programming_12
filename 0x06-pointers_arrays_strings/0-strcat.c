#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * Description: function that concatenates two strings
 * Return: a concatenated sting
*/

char *_strcat(char *dest, char *src)
{
	int i;

	i = strlen(dest);

	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}

	return (dest);
}
