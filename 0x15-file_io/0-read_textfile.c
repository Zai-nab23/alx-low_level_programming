#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: filename
 * @letters: letters to printed
 * Return: printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filediscribtor;
	ssize_t numread, numwritten;
	char *buff;

	if (!filename)
		return (0);
	filediscribtor = open(filename, O_RDONLY);

	if (filediscribtor == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);
	numread = read(filediscribtor, buff, letters);
	numwritten = write(STDOUT_FILENO, buff, numread);
	close(filediscribtor);
	free(buff);

	return (numwritten);
}

