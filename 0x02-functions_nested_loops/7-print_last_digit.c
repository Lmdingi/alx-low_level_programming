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

	lastdigit = number % 10;
	return (lastdigit);
}
