#include "main.h"
#include <string.h>

void getNum(int num);

/**
 * print_array - function that prints half of a string
 * @a: array to be printed
 * @n: regulating umber of array items to be printed
 * Description: function that prints an array based on n
 * Return: n/a
*/

void print_array(int *a, int n)
{
	int i = 0 ,num; 

	while (i < n)
	{
		num = *(a + i);

		if (num < 0)
		{
			num = num * -1;
			_putchar('-');
			getNum(num);
		}
		else
		{
			getNum(num);
		}
		
		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}

/**
 * getNum - function functing that prints num
 * @num: number to be printed
 * Description: function that prints an int
 * Return: n/a
*/

void getNum(int num)
{
	int ones = num % 10;
	int tens = (num / 10) % 10;
	int hundreds = (num / 100) % 10;
	int thousands = (num / 1000) % 10;

	if (thousands == 0 && hundreds == 0 && tens == 0)
	{
		 _putchar(ones + '0');
	}
	else if (thousands == 0 && hundreds == 0)
	{
		_putchar(tens + '0');
		_putchar(ones + '0');
	}
	else if  (thousands == 0)
	{
		 _putchar(hundreds + '0');
		 _putchar(tens + '0');
		 _putchar(ones + '0');
	}
	else
	{
		_putchar(thousands + '0');
		_putchar(hundreds + '0');
		_putchar(tens + '0');
		_putchar(ones + '0');
	}
}

