#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print opcodes
 * @a: address of program
 * @n: byte
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%.2hhx", a[s]);
		if (s < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - print the opcodes
 * @agrc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}

