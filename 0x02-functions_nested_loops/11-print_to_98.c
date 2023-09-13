#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n
 * @n: the value for starting the counter
 *
 */
void print_to_98(int n)
{
	int a;

	if (n >= 0 && n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
				if (a != 98)
					printf(", ");
		}
	}
}


