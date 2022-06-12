#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print last number
 * @a: take digits
 *i Return: last number
 */
int print_last_digit(int a)
{

	_putchar((a % 10) + '0');
	return (a);
}
