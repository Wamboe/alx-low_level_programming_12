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
	int num = 0;

	for (; num < 10 ; num++)
	{
		printf("%d", num);
	}

	putchar('\n');
	return (0);
}
