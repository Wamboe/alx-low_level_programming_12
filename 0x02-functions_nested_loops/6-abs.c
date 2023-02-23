#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @i: takes one int parameter*
 *
 * Description: getting the absolute value of an integer
 *
 * Return: positive integer
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}

	return (i);
}
