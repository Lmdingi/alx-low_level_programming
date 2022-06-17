#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print last number
 * @a: take digits
 * Return: last number
 */
int print_last_digit(int a)
{
	int b;

	b = (a % 10);
	if (b < 0)
	{
		b = (-1 * b);
	}
	_putchar(b + '0');
	return (b);
}
