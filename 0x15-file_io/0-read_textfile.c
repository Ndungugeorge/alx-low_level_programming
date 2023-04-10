#include "main.h"

/**
 * read_textfile - reads a text file and prints to posix stdout
 * @filename: filename.
 * @letters: num of letters.
 *
 * Return: actual numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nr, nwr;
	char *buffer;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nr = read(f, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nr);

	close(f);

	free(buffer);

	return (nwr);
}
