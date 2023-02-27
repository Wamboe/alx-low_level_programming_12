#include "main.h"

/**
 * print_numbers - fxn that print numbers
 *
 * Description: fxn that print 0-9
 *
 * Return: no return values
*/

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
