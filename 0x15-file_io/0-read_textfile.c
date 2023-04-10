#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout.
 * @filename: name of file to print.
 * @letters: number of letters to print
 *
 * Return: Actual number of letters it could read
 * and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);

	a = open(filename, O_RDONLY);

	if (a == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rd = read(a, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(a);

	free(buf);

	return (wr);
}
