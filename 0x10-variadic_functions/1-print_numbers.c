#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a, arr;

	va_list pointer;

	va_start(pointer, n);
	for (a = 0; a < n; a++)
	{
		arr = va_arg(pointer, const unsigned int);
		printf("%d", arr);

		if (a != (n - 1) && separator != NULL)
			printf("%sn", separator);
	}
	printf("\n");
	va_end(pointer);
}
