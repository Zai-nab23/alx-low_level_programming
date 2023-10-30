#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: filename
 * @text_content: content to be copied
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int filediscribtor;
	int newletters;
	int readwritten;

	if (!filename)
		return (-1);
	filediscribtor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);

	if (filediscribtor == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (newletters = 0; text_content[newletters]; newletters++)
		;

	readwritten = write(filediscribtor, text_content, newletters);
		if (readwritten == -1)
			return (-1);
	close(filediscribtor);

	return (1);
}
