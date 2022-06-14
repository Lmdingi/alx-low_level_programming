#include "main.h"

/**
 * print_numbers - numbas
 * Returns: nothing
 */
void print_numbers(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		_putcha((p) + '0');
	}
	_putchar('\n');
}
