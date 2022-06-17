#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strcat - link two strings
 * @dest: takes linked strings
 * @src: gets strings to link
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
