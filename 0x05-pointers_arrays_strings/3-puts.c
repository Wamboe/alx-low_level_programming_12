#include "main.h"
#include <string.h>

/**
 * _puts - prints a string
 * @str: string passed to be printed
 * Description: function that prints a string
 * Return: n/a
*/

void _puts(char *str)
{
	int i = 0;
	int len = strlen(str);

	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
