#include "main.h"

/***/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while(*dest && i < n)
	{
		*dest = src[i];
		dest++;
		i++;
	}

	return (dest);
}
