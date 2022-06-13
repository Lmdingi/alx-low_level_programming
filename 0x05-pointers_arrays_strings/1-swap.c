#include "main.h"

/**
 * swap_int - swap value of two ints
 * @a: takes in first int
 * @b: takes in second int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int hold_a = *a;
	int hold_b = *b;

	*a = hold_b;
	*b = hold_a;
}
