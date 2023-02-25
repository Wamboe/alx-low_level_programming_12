#include "main.h"

void lessThanEq98(int);
void greaterThanEq98(int);

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
	if (n <= 98)
	{
		lessThanEq98(n);
	}
	else
	{
		greaterThanEq98(n);
	}

	_putchar('\n');
}

/**
 * lessThanEq98 - n <= 98
 *
 * @n: int where the printing should start
 *
 * Descritption: prints all natural numbers from n to 98 where n <= 98
 *
 * Return: null as the fxn type is void
 */

void lessThanEq98(int n)
{
	int last;
	int seclast;
	int thirdlast;

	for (n = n; n <= 98; n++)
	{
		thirdlast = (n / 100) % 10;
		seclast = (n / 10) % 10;
		last = n % 10;

		if (n < 0)
		{
			_putchar('-');
			thirdlast = thirdlast * -1;
			seclast = secondlast * -1;
			last = last * -1;
		}
		if (seclast == 0 && thirdlast == 0)
		{
			_putchar(last + '0');
		}
		else if ((seclast <= 0 && thirdlast > 0) || (seclast >= 0 && thirdlast > 0))
		{
			_putchar(thirdlast + '0');
			_putchar(seclast + '0');
			_putchar(last + '0');
		}
		else if (seclast > 0 && thirdlast == 0)
		{
			_putchar(seclast + '0');
			_putchar(last + '0');
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

/**
 * greaterThanEq98 - n >= 98
 *
 * @n: int where the printing should start
 *
 * Descritption: prints all natural numbers from n to 98 where n >= 98
 *
 * Return: null as the fxn type is void
 */

void greaterThanEq98(int n)
{
	int last;
	int secondlast;
	int thirdlast;

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
