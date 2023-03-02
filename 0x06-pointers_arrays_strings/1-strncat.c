#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * Description: function that concatenates two strings
 * Return: a concatenated sting*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	i = strlen(dest);
	j = 0;

	if(n == NULL)
	{
		while (*src)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	else
	{
		while (j <= n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}

	return (dest);

}
