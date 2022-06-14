#include "main.h"

/**
 * _strcpy - copy string to dest with eof
 * @dest: takes the copy
 * @src: take from here
 * Return:char
 */
char *_strcpy(char *dest, char *src)
{
	int cc;

	for (cc = 0; src[cc] != '\0'; cc++)
	{
		dest[cc] = src[cc];
	}
	dest[cc] = src[cc];
	return (dest);
}
