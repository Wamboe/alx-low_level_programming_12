#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: string to compare to s1
 * Description: function that compares two strings
 * Return: ascii char of s1 if not equal else 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i]-s2[i]);
			
		}
	}
	return (0);

}
