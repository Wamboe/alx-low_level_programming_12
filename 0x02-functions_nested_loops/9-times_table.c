#include "main.h"

/**
 * times_table - 9 multiplication table
 *
 * Description: Write a function that prints the 9 times table, starting with 0
 *
 * Return: no return statement
 */

void times_table(void)
{
	int num1;
	int num2;
	int num3;
	int last;
	int secondlast;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			num3 = num1 * num2;
			secondlast = (num3 / 10) % 10;
			last = num3 % 10;

			if (secondlast > 0)
			{
				_putchar(secondlast + '0');
				_putchar(last + '0');
				if (num2 < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(last + '0');
				if (num2 < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
