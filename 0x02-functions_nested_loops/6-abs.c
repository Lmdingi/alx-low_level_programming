#include "main.h"

/**
 * _abs - complete absolute value
 * @a: takes in abs
 * Return:the compleate value
 */
int _abs(int a)
{

	if (a < 0)
	{
		a = (-1) * a;
	}
	else
	{
		a = a;
	}
	return (a);
}
