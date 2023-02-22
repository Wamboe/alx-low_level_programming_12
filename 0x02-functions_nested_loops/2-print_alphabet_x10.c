#include "main.h"

/**
 * print_alphabet_x10 - function definition
 *
 * Description: 'prints alphabet a-z in lower case 10 times'
 *
 * Return: nil returns
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 10;

	for (; i > 0; i--)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
