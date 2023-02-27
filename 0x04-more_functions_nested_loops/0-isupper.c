/**
 * _isupper - fxn that takes one argument
 *
 * @c: char being checked
 *
 * Description: check if a letter is uppercase
 *
 * Return: 1 ifc is uppercase and 0 if not
 */

int _isupper(int c)
{
	int r;

	if (c >= 65 && c <= 90)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}

	return (r);
}
