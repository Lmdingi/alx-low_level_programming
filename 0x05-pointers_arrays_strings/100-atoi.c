#include "main.h"

/**
 * _atoi - string to int
 * @s: takes string
 * Return: int
 */
int _atoi(char *s)
{
	int num = 0;
	int i = 0;
	int isNegetive = 0;

	if (s[i] == '-')
	{
		isNegetive = 1;
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	if (isNegetive)
	{
		num = -1 * num;
	}
	return (num);
}
