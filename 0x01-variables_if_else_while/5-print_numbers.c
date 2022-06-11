#include <stdio.h>

/**
 * main - print base numbers
 * Return: Always 0.
 */
int main(void)
{
	int base_number = 0;

	while (base_number < 10)
	{
		printf("%d", base_number);
		base_number++;
	}
	printf("\n");
	return (0);
}
