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
		if (si < 9)
		{
			putchar(co);
			putchar(sp);
		}
		si++;
	}
	putchar('\n');
	return (0);
}
