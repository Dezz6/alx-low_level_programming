#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: name of the file
 * @text_content: text content to append
 *
 * Return: 1 if success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, w, nstr;

	if (filename == NULL)
		return (-1);

	a = open(filename, O_WRONLY | O_APPEND);

	if (a == -1)
		return (-1);

	if (text_content)
	{
		for (nstr = 0; text_content[nstr]; nstr++)
			;

		w = write(a, text_content, nstr);

		if (w == -1)
			return (-1);
	}
	close(a);

	return (1);
}
