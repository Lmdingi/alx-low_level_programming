#include <stdio.h>

/**
 * main - 16 base in lowercase
 * Return: Always 0.
 */
int main(void)
{
	int dgt = 0;
	char ch = 'a';

	if (dgt < 10)
	{
		while (dgt < 10)
		{
			putchar((dgt % 10) + '0');
			dgt++;
		}
		while (ch <= 'f')
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
