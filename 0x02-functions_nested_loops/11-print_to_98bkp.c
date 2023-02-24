#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @n: int where the printing should start
 *
 * Descritption: function that prints all natural numbers from n to 98
 *
 * Return: null as the fxn type is void
 */

void print_to_98(int n)
{
	int last;
	int secondlast;
	int thirdlast;

	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			secondlast = (n / 10) % 10;
			last = n % 10;

			if (n < 0)
			{
				_putchar('-');
				secondlast = secondlast * -1;
				last = last * -1;
			}

			if (secondlast == 0)
			{
				_putchar(last + '0');
			}
			else
			{
				_putchar(secondlast + '0');
				_putchar(last + '0');
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			thirdlast = (n / 100) % 10;
			secondlast = (n / 10) % 10;
			last = n % 10;

			if (secondlast == 0 && thirdlast == 0)
			{
				_putchar(last + '0');
			}
			else if (thirdlast == 0)
			{
				_putchar(secondlast + '0');
				_putchar(last + '0');
			}
			else
			{
				_putchar(thirdlast + '0');
				_putchar(secondlast + '0');
				_putchar(last + '0');
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
