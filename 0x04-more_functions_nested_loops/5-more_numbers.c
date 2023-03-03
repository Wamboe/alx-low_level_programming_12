#include "main.h"

/**
 * more_numbers - fxn that print  numbers
 *
 * Description: fxn that print 0-14 10 times
 *
 * Return: no return values
*/

void more_numbers(void)
{
	int i = 0, j;
	int ones, hundreds;
	char *c;

	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
			{
				ones = j % 10;
				hundreds = (j / 10) % 10;
				*c = ones
			}
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
