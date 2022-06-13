#include "main.h"

/**
 * puts2 - print second char
 * @str: take in string
 * Return: nothing
 */
void puts2(char *str)
{
	int c;

	for (c = 0; *(str + c) != '\0'; c++)
	{
		_putchar(*(str + c));
		if (*(str + c) != '\0')
		{
			c++;
		}
	}
	_putchar('\n');
}
