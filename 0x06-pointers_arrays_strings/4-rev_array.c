#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array being reveresed
 * @n: length of new reversed array
 * Description: function that reverses the content of an array of integers
 * Return: n/a
*/

void reverse_array(int *a, int n)
{
	int i = 0;

	for (; i < (n - 1); n--)
	{
		int temp = a[i];

		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
	}
}
