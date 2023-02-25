#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @i: takes one int parameter*
 *
 * Description: getting the absolute value of an integer
 *
 * Return: positive integer
 */

int _abs(int i)
{
	/*int last;
	int second_last;*/

	if (i < 0)
	{
		i = i * -1;
	}

	/*second_last = (i / 10) % 10;
	last = i % 10;

	if (second_last == 0)
	{
		_putchar(last + '0');
	}
	else
	{
		_putchar(second_last + '0');
		_putchar(last + '0');
	}

	_putchar('\n');*/
	return (i);
}
