#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'looping small letters'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	return (0);
}
