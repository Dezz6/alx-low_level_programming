#include "main.h"

/**
 * create_file - Creates a file
 * @filename: name of file to create
 * @text_content: text content of the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int a, nstr, wr;

	if (filename == NULL)
		return (-1);

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (a == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nstr = 0; text_content[nstr]; nstr++)
		;

	wr = write(a, text_content, nstr);

	if (wr == -1)
		return (-1);

	close(a);

	return (1);
}
