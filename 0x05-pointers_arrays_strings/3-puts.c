#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: takes in a string pointer
 * Return: nothing
 */
void _puts(char *str)
{
	int pr;

	for (pr = 0; *(str + pr) != '\0'; pr++)
	{
		_putchar(*(str + pr));
	}
	_putchar('\n');
}

