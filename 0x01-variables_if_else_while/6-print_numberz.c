#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'printing single digit numbers'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num = '0';

	for (; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}
