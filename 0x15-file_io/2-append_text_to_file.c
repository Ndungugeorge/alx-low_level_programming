#include "main.h"

/**
 * append_text_to_file - func appends text at the end of a file
 * @filename: filename.
 * @text_content: added text
 *
 * Return: 1 if success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int numletters;
	int rwr;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (numletters = 0; text_content[numletters]; numletters++)
			;

		rwr = write(f, text_content, numletters);

		if (rwr == -1)
			return (-1);
	}

	close(f);

	return (1);
}
