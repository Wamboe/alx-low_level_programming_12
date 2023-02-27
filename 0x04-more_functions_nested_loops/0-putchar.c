#include "main.h"
#include <stdio.h>

int _putchar(char);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'A';
/*
	while (*c)
	{
		_putchar(*c);
		c++;
	}
*/
	_putchar(c - '0');
	printf("%d", c - '0');
	_putchar('\n');
	return (0);
}
