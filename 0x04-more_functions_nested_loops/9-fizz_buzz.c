#include "main.h"
#include <stdio.h>
/**
 * main - function prints the number from 1-100, but for multiples of three,
 *       fizz is printed instead of the number, for multiples of five,
 *           Buzz, and for multiples of both three and five fizzBuzz.
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("fizzbuzz");
		else if ((num % 3) == 0)
			printf("fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
