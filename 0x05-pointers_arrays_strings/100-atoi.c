#include "main.h"

/**
 * _atoi - string to int
 * @s: takes string
 * Return: int
 */
int _atoi(char *s)
{
	int result;
	int puiss;

	result = 0;
	puiss = 1;
	while (('-' == (*s)) || ((*s) == '+'))
	{
		if (*s == '-')
		{
			puiss = puiss * -1;
		}
		s++;
	}
	while ((*s >= '0') && (*s <= '9'))
	{
		result = (result * 10) + ((*s) - '0');
		s++;
	}
	return (result * puiss);
}
