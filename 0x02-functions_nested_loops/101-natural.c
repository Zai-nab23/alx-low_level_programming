#include <stdio.h>
#include "main.h"

/**
 * main - finding the multiples
 *
 * Return: 0 successful
 */
int main(void)
{
	int a;

	int b = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b += a;
		}
	}
	printf("%d", b);
	printf("\n);
	return (0);
}

