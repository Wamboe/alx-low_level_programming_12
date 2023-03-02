#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * Description: function that concatenates two strings
 * Return: a concatenated sting*/

char _strcat(char *dest, char *src)
{
	int i, j;
	i = strlen(dest);
	j = 0;

	while (*src)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);

}
