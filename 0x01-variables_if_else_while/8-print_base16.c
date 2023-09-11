#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	int d;

	for (c = 0; c < 10; c++)
		putchar((c % 10) + '0');
	for (d = 'a'; d <= 'f'; d++)
		putchar(d);

	putchar('\n');

	return (0);
}
