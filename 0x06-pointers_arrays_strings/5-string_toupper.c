#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase
 * @c - holds the string to be capitalized
 * Description: function that changes all lowercase letters of a string to uppercase
 * Return: a capitalized string special chars remain the same
 * */

char *string_toupper(char *c)
{
	int i = 0;

	while (*(c+i) != '\0')
	{
		if ((*(c+i) >= 'a') && (*(c+i) <= 'z'))
		{
			char new = *c - 32;
			*(c+i) = new;
		}
		c++;
	}
	return (c);
}
