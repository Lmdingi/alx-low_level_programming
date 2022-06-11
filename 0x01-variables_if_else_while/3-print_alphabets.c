#include <stdio.h>

/**
 * main - print small alphabet and capital letters
 * Return: Always 0.
 */

int main(void)
{
	char small = 'a', big = 'A';

	if (small <= 'z')
	{
		while (small <= 'z')
		{
			putchar(small);
			small++;
		}
	}
	if (big <= 'Z')
	{
		while (big <= 'Z')
		{
			putchar(big);
			big++;
		}
	}
	putchar('\n');
	return (0);
}
