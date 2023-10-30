#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to POSIX
 * @filename: filename (string pointer)
 * @letters: number of letters to be printed
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_rd, n_wr;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	n_rd = read(fd, buff, letters);
	n_wr = write(STDOUT_FILENO, buff, n_rd);

	close(fd);
	free(buff);

	return (n_wr);
}
