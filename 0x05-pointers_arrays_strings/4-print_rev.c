#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: takes in a string
 * Return: nothing
 */
void print_rev(char *s)
{
	int count;

	for (count = 0; *(s + count) != '\0'; count++)
	{
	}
	if (*(s + count) == '\0')
	{
		count--;
		while (count >= 0)
		{
			_putchar(*(s + count));
			count--;
		}
	}
	_putchar('\n');
}
