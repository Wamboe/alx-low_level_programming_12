#include "main.h"

/**
 * _isalpha - function definition
 *
 * Description: 'checks for alphabets'
 *
 * @c: integer parameter the fxn takes
 *
 * Return: 0 if c is not am alphabet  and 1 if it is
 */

int _isalpha(int c)
{
	int r;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
