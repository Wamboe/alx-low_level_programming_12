#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase
 * @c - holds the string to be capitalized
 * Description: function that changes all lowercase letters of a string to uppercase
 * Return: a capitalized string special chars remain the same
 * */

char *string_toupper(char *c)
{
	while (*c != '\0')
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c = *c -32;
		}
		c++;
	}
	return (c);
}
