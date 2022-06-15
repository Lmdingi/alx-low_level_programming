#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print last number
 * @a: take digits
 *i Return: last number
 */
int print_last_digit(int a)
{
	int r;

	if (a <= 9)
	{
		r = a;
	}
	else if (a >= -9)
	{
		r = a;
	}
	else
	{
		r = a % 10;
	}
	return (r);
}
