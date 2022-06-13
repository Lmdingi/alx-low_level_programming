#include "main.h"

/**
 * rev_string - reverse string
 * @s: take pointer string in
 * Return: nothing
 */
void rev_string(char *s)
{
	int ps, wc, eof = 0;
	char temp[1000];

	for (ps = 0; s[ps] != '\0'; ps++)
	{
		wc++;
		eof++;
	}

	for (ps = 0; s[ps] != '\0'; ps++)
	{
		temp[ps] = s[ps];
	}
	temp[eof] = s[eof];
	wc--;

	for (ps = 0; ps != eof; ps++)
	{
		s[ps] = temp[wc];
		wc--;
	}
	s[eof] = temp[eof];
}
