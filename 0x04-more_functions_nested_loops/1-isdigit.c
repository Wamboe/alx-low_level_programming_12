/**
 * _isdigit - fxn that takes one argument
 *
 * @c: char being checked
 *
 * Description: check if a variable is a digit
 *
 * Return: 1 ifc is uppercase and 0 if not
 */

int _isdigit(int c)
{
	int r;

	if (c >= '0' && c <= '9')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}

	return (r);
}
