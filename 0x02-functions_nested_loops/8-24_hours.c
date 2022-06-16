#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - 24h
 * Return: 0
 */
void jack_bauer(void)
{
	int min;
	int hour;
	int zero = 0;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			if (hour < 10)
			{
				printf("%d", zero);
				printf("%d", hour);
				printf(":");
			}
			else
			{
				printf("%d", hour);
				printf(":");
			}
			if (min < 10)
			{
				printf("%d", zero);
				printf("%d", min);
				printf("\n");
			}
			else
			{
				printf("%d", min);
				printf("\n");
			}
		}
	}
}
