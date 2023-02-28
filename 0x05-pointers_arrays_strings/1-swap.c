/**
 * swap_int - swaps pos of two ints
 *
 * @a: address of first num
 * @b: address of 2nd num
 * Description: function that swaps the values of two integers.
 * Return: n/a
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
