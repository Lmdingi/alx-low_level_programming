#include "main.h"

/**
 * _strcmp - string compare
 * @s1: first str
 * @s2: second str
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0, at = 0, st1 = 0, st2 = 0;
	
	for (c = 0; s1[c] != '\0'; c++)
	{
		st1 = st1 + s1[c];
	}
	for (c = 0; s2[c] != '\0'; c++)
	{
		st2 = st2 + s2[c];
	}
	at = st1 - st2;
	return (at);
}
