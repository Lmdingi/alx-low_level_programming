#include "main.h"

/**
 * _isalpha - checks for alphabet only
 * @c: takes in a character
 * Return: 0 or 1 to identify type of character
 */
int _isalpha(int c)
{
	int r;

	if (c >= 'a' && c <= 'z')
	{
		r = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
