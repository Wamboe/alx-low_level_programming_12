#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string
 * @str: string to be printed
 * Description: function that prints lower half of a string
 * Return: n/a
*/

void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	if ((len % 2) > 0)
	{
		i = (len - 1) / 2;
	}
	else
	{
		i = len / 2;
	}

	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

