#include <stdio.h>
#include "main.h"

/**
 * print_times_table - multiplication times table
 * @n: multiplier
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n > 15)
	{

	}
	else if (n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (a < 16 && b < 1)
				{
					printf("%d", c);
				}
				else
					printf("%3d", c);
				if (c < n)
					printf(", ");
			}
			printf("\n");
		}
	}
}
