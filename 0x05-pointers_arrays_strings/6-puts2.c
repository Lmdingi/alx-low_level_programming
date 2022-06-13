#include "main.h"

/**
 * puts2 - print second char
 * @str: take in string
 * Return: nothing
 */
void puts2(char *str)
{
	int ps;

	for (ps = 0; *(str + ps) != '\0'; ps++)
	{
		if ((*str + ps) == '\0')
		{
			break;
		}
		else
		{
			_putchar(*(str + ps));
			if (*(str + ps) != '\0')
			{
				ps++;
			}
		}
	}
	*(str + ps) = '\0';
	_putchar('\n');
}
