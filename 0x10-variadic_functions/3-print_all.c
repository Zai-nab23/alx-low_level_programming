#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: argument result
 */
void print_all(const char * const format, ...)
{
	int a, check_stat;

	char *str;
	va_list spc;

	va_start(spc, format);

	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 'i':
				printf("%d", va_arg(spc, int));
			check_stat = 0;
			break;
			case 'f':
			printf("%d", va_arg(spc, int));
			check_stat = 0;
			break;
			case 'c':
			printf("%c", va_arg(spc, int));
			check_stat = 0;
			break;
			case 's':
			str = va_arg(spc, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
			default:
			check_stat = 1;
			break;
		}
		if (format[a + 1] != '\0' && check_stat == 0)
			printf(",");

		a++;
	}
	printf("\n");
	va_end(spc);
}
