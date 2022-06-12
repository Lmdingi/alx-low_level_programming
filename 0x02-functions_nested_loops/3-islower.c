#include "main.h"

/**
 * _islower - checks if its lower case
 * Return: 1 or 0
 */
int _islower(int c)
{
	int r;
	int lower = 1;
	int upper = 0;

	if (c >= 'a' || c <= 'z')
	{
		r = lower;
	}
	else
	{
		r = upper;
	}
	return (r);
}
