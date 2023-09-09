#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	     char d;

	     d = 'n';
	     while
		     (d <= 'z') {
			     if ((d != 'q' && d != 'e') && d <= 'z')
				     putchar(d);
			     d++;
		     }
	     putchar('\n');
	     return (0);
}
