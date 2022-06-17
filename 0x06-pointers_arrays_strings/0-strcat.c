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
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
	{
	}
	return (dest);
