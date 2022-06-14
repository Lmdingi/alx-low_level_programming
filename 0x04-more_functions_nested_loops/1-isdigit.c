/**
 * _isdigit - takes digit
 * @c: diti
 * Return: int
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
