#include "main.h"

void times_table(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 <= 9; num1++)
	{
		/*_putchar(num1 + '0');*/
		for (num2 = 0; num2 <= 9; num2++)
		{
			num3 = num1 * num2;
			_putchar(num3 + '0');
		}
		_putchar('\n');
	}
}
