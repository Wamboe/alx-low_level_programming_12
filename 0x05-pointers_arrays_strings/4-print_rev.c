#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string passed to be printed
 * Description: function that prints a string in reverse
 * Return: n/a
*/

void print_rev(char *s)
{
	int i = 0;
	int len = strlen(s);

	while (len >= i)
	{
		_putchar(*(s + len);
		len--;
	}
	_putchar('\n');
}
