#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)

		for (ones = '0'; tens <= '9'; ones++)

		       while (!((ones == tens) || (tens > ones)))

				putchar(tens);
				putchar(ones);
			        while (!(ones == '9' && tens == '8'))

					putchar(',');
					putchar(' ');

	putchar('\n');
	return (0);
}
