#include "main.h"
#include <stdio.h>

/**
 * print_array - print array
 * @a: take in pointer
 * @n: take in string
 */
void print_array(int *a, int n)
{
	int pr, com = 1;

	for (pr = 0; pr < n; pr++)
	{
		printf("%d", a[pr]);
		if (com < n)
		{
			printf(", ");
			com++;
		}
	}
	printf("\n");
}
