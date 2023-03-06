#include "main.h"
#include <stddef.h>

/**
 * _strchr - that locates a character in a string
 *
 * @s: string being read
 * @c: char we are suching
 *
 * Description: that locates a character in a string
 * Return: Returns a pointer to the first occurrence of the c in s, or NULL if not found*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while(*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			char *charPtr = (char *)(s + i);
			return (charPtr);
		}
		i++;
	}
	return (NULL);
}
