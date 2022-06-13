#include "main.h"

/**
 * puts2 - print second char
 * @str: take in string
 * Return: nothing
 */
void puts2(char *str)
{
	int ps, eof;
	int emt = 0;

	if (*(str + emt) == '\0')
	{
		_putchar('\0');
	}
	else
	{
		_putchar(*(str + 0));
	}
	for (ps = 1; *(str + ps) != '\0'; ps++)
	{
		eof++;
		if ((ps % 2) == 0)
		{
		_putchar(*(str + ps));
		}
	}
	_putchar('\n');
}
