#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: takes in number
 * Return: sign
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		r = -1;
	}
	else
	{
		_putchar('0');
		r = 0;
	}
	return (r);
}
