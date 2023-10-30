#include "main.h"
/**
 * create_file - function that create a file
 * @filename: name of the file to be created
 * @text_content: string to write to the file
 * Return: 1 if suceesful or -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int r_wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;
	r_wr = write(fd, text_content, nletters);

	if (r_wr == -1)
		return (-1);
	close(fd);

	return (1);
}
