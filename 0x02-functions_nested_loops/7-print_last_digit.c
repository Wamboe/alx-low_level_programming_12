#include "main.h"

/**
 * print_last_digit - prints the last digi
 *
 * @i: takes in 1 argument of type int
 *
 * Description:  function that prints the last digit of a number
 *
 * Return: returns the last digit
 */

int print_last_digit(int i)
{
	int last = i % 10;

	if (last < 0)
	{
		last = last * -1;
		_putchar(last + '0');
	}
	else
	{
		_putchar(last + '0');
	}

	return (last);
}
