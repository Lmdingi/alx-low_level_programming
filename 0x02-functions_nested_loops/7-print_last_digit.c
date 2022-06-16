#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print last number
 * @a: take digits
 *i Return: last number
 */
int print_last_digit(int a)
{
	int number = a;
	int lastdigit;

	if (number >= -9 && number >= 9)
	{
		return (number);
	}
	else
	{
		lastdigit = number % 10;
	}
	return (lastdigit);
}
