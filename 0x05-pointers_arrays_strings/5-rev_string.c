#include "main.h"

/**
 * rev_string - reverse string
 * @s: take pointer string in
 * Return: nothing
 */
void rev_string(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == '\0')
		{
			c--;
			while (c > 0)
			{
				_putchar(s[c]);
				c--;
			}
		}
	}
	_putchar('\n');
}
