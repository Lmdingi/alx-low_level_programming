#include "main.h"
#include <stdio.h>

/**
 * times_table - times table
 * Return: nothuing
 */
void times_table(void)
{
	int zero2nine, ourTimes, ans;

	for (ourTimes = 0; ourTimes <= 9; ourTimes++)
	{
		for (zero2nine = 0; zero2nine <= 9; zero2nine++)
		{
			ans = ourTimes * zero2nine;
			printf("%d", ans);
			if (ourTimes == 9 && zero2nine == 9)
			{
				printf("\n");
				break;
			}
			else if (zero2nine == 9)
			{
				printf("\n");
			}
			else
			{
				printf(",.");
				if (((zero2nine + 1) * ourTimes) < 10)
				{
					printf(".");
				}
			}
		}
	
	}
}

