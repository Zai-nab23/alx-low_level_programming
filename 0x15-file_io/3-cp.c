#include "main.h"
#include <stdio.h>
/**
 * error_detector - function that detect
 * error in a file
 * @file_input: initial file
 * @file_output: final file
 * @argv: argument vector
 * Return: nothing
 */
void error_detector(int file_input, int file_output, char *argv[])
{
	if (file_input == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_output == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
	exit(99);
	}
}

/**
 * main - program that copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int file_input;
	int file_output;
	int err_close;
	char buf[1094];
	ssize_t nchars;
	ssize_t numwritten;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_input = open(argv[1], O_RDONLY);
	file_output = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_detector(file_input, file_output, argv);
	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_input, buf, 1024);
		if (nchars == -1)
			error_detector(-1, 0, argv);
		numwritten  = write(file_output, buf, nchars);
		if (numwritten == -1)
			error_detector(0, -1, argv);
	}

	err_close = close(file_input);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_input);
		exit(100);
	}
	err_close = close(file_output);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_output);
		exit(100);
	}
	return (0);
}
