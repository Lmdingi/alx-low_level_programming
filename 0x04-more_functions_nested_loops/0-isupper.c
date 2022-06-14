#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - check upper case
 * Return: 1 if c is uppercase
 */
int _isupper(int c)
{
	int r;

	if (c >= 'a' && c <= 'z')
	{
		r = 0;
	}
	else
	{
		r = 1;
	}
	return (r);
}
