#include "main.h"

/**
 * print_alphabet - function definition
 *
 * Description: 'prints alphabet information in lower case'
 *
 * Return: nil returns
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
