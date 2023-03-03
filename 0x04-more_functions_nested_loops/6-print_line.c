#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: no. of time to print _
 * Description: function that draws a straight line in the terminal.
 * Return n/a
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
