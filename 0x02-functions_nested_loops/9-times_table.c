#include <stdio.h>
#include "main.h"

/**
 * times_table - Entry point for 9 times table
 *
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (a < 10 && b < 1)
			{
				printf("%d", c);
			}
			else
				printf("%2d", c);
			if (b < 9)
				printf(", ");
		}
		printf("\n");
	}
}

