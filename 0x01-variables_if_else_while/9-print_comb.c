#include <stdio.h>

/**
 * main - print all single combinations
 * Return: Always 0.
 */
int main(void)
{
	int si = 0, co = ',', sp = ' ';

	while (si < 10)
	{
		putchar((si % 10) + '0');
		si++;
		putchar(co);
		putchar(sp);
	}
	putchar('\n');
	return (0);
}
