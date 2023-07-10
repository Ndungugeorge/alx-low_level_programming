#include "main.h"

/**
 * create_file - func that creates a file
 * @filename: filename
 * @text_content: content writed in the file.
 *
 * Return: 1 on success. -1 on  fails.
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int numletters;
	int rwr;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numletters = 0; text_content[numletters]; numletters++)
		;

	rwr = write(f, text_content, numletters);

	if (rwr == -1)
		return (-1);

	close(f);

	return (1);
}
