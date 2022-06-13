#include "main.h"
#include <string.h>

/**
 * _strlen - check the length of string
 * @s: takes in the string for length check
 * Return: the size of the string
 */
int _strlen(char *s)
{
	int r;

	for (r = 0; *(s + r) != '\0'; r++)
	{
		r++;
	}
	return (r);
}
