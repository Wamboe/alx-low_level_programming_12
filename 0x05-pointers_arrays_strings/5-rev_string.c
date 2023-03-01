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
	int temp;

	while (i < (len / 2))
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}
