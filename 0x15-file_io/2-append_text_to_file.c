#include "main.h"

/**
 * append_text_to_file - add text to an already existing file
 * @filename: the name of the file to append content to
 * @text_content: THE CONTENT TO BE APPENDED TO THE FILE
 *
 * Return: 1 on success and -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int sent_ce;
	int r_wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

		if (fd == -1)
			return (-1);

	if (text_content)
	{
		for (sent_ce = 0; text_content[sent_ce]; sent_ce++)
			;
		r_wr = write(fd, text_content, sent_ce);

		if (r_wr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
