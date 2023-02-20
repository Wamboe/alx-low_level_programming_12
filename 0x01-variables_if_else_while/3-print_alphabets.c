#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'looping small and big letters'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	for (; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (; C <= 'Z' ; C++)
	{
		putchar(C);
	}

	putchar('\n');
	return (0);
}
