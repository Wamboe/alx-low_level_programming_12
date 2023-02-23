#include "main.h"

/*
 * print_sign - a function that prints the sign of a number
 *
 * Description: checks whether neg pos or zero
 *
 * Return: int of 0 or 1
 */

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		r = 0;
		_putchar('0');
	}
	else
	{
		r = 1;
		_putchar('-');
	}
	return (r);
}
