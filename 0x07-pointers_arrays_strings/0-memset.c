#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: array to be replaced
 * @b: char used to buffer
 * @n: size of the buffer
 * Description: function that fills memory with a constant byte
 * Return: edited array s is 
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
