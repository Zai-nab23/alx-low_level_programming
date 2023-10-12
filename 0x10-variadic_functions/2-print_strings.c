#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @n: number of strings passed to the function
 * @separator: string to be printed between the strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *string;

	va_list pointer_string;

	va_start(pointer_string, n);
	for (a = 0; a < n; a++)
	{
		string = va_arg(pointer_string, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pointer_string);
}
