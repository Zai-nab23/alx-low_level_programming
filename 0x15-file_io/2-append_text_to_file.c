#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file content
 * @text_content: content of appended file
 * Return: Return 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filediscribtor;
	int readwritten;
	int newletters;

	if (!filename)
		return (-1);
	filediscribtor = open(filename, O_WRONLY | O_APPEND);
		if (filediscribtor == -1)
		return (-1);

	if (text_content)
	{
		for (newletters = 0; text_content[newletters]; newletters++)
			;
		readwritten = write(filediscribtor, text_content, newletters);

		if (readwritten == -1)
			return (-1);
	}
	close(filediscribtor);
		return (1);
}
