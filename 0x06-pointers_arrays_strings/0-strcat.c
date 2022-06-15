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
	int dcount, sd;
	char holder[100];

	for (dcount = 0; dest[dcount] != '\0'; dcount++)
	{
		holder[dcount] = dest[dcount];
	}
	sd = sizeof(dest);
	for (dcount = 0; src[dcount] != '\0'; dcount++)
	{
		holder[sd] = src[dcount];
		sd++;
	}
	sd++;
	holder[sd] = src[dcount];
	dest = holder;
	return (dest);
}
