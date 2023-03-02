#include "main.h"

/***/

char *string_toupper(char *c)
{
	while (*c)
	{
		if (*c != '\0')
		{
			if (*c >= 'A' && *c <= 'Z')
			{
				*c = *c;
			}
			else if (*c >= 'a' && *c <= 'z')
			{
				char new = *c - 32;
				*c = new;
			}
			else
			{
				*c = *c;
			}
		}
		c++;
	}
	return (c);
}
