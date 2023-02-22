#include <ctype.h>
#include "main.h"

/**
 * _islower - function definition
 *
 * @c : this is an integer
 *
 * Description: 'checks for lower case'
 *
 * Return: 0 if false and 1 if true
 */

int _islower(int c)
{
	int r;

	if (c >= 'a' && c <= 'z')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
