#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* check_num - Check if string contains only digits * @str: The input string
*
* Return: 1 if all characters are digits, 0 otherwise
 */

int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
	if (!isdigit(str[count])) return (0);

		count++;
	}
	return (1);

}
/**
* main - Entry point, prints the sum of valid integers from arguments
* @argc: The argument count
* @argv: The argument vector *
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);

return (0);
}
