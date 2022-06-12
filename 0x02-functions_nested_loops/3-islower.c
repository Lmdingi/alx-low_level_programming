#include "main.h"

/**
 * _islower - checks if its lower case
 * @c: takes in charecter
 * Return: 1 or 0
 */
int _islower(int c)
{
	int r;

	if (c >= 'a' && c <= 'z')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
