#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *ptr;
	int i;

	for (i = 0; i < 98 - 1; i++)
	{
		s1[i] = '*';
	}
	s1[i] = '\0';
	printf("%s - %lu\n", s1, strlen(s1));
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
	printf("%s - %lu\n", s1, strlen(s1));
	printf("%s - %lu\n", ptr, strlen(s1));
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
	printf("%s - %lu", s1, strlen(s1));
	printf("%s - %lu", ptr, strlen(s1));
	for (i = 0; i < 98; i++)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", s1[i]);
	}
	printf("\n");
	return (0);
}
