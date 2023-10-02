#include "main.h"

/**
 * custom_append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The content to be added.
 *
 * Return: 1 if the file exists or the operation succeeds, -1 if the file
 * does not exist or if it fails.
 */
int custom_append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
