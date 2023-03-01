#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Description: function that reverses a string
 * Return: n/a
*/

void rev_string(char *s)
{
	int len = strlen(s);
	int i = 0; 

	while (len >= i)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
