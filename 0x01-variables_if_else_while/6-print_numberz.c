#include <stdio.h>

/**
 * main - lonto iyiyo
 * Return: Alway 0.
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
