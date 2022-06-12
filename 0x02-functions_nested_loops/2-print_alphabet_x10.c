#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char ch;
	int times;

	for (times = 0; times < 10; times++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
