#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Entry point
 *
 * @i: int being tested
 *
 * Description: checking on whether an int is positive or neg or zero
 *
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
