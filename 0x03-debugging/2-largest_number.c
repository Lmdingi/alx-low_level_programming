#include <main.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first intager
 * @b: second intager
 * @c: third intager
 *Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (c > a && a > b)
	{
		largest = c;
	}

	return (largest);
}