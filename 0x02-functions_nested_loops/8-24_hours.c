#include "main.h"

/**
 * jack_bauer - prints time
 *
 * Description: print the last 24hrs
 *
 * Return: null
 *
 */

void jack_bauer(void)
{
	char four;
	char three;
	char two;
	char one;

	for (one = '0'; one <= '2'; one++)
	{
		for (two = '0'; two <= '9'; two++)
		{
			for (three = '0'; three < '6'; three++)
			{
				for (four = '0'; four <= '9'; four++)
				{
					if ((one == '2' && two > '3') || (three == '6' && four > '0'))
					{
						break;
					}

					_putchar(one);
					_putchar(two);
					_putchar(':');
					_putchar(three);
					_putchar(four);
					_putchar('\n');
				}
			}
		}
	}
}
