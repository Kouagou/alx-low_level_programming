#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>


/**
 * read_textfile - A function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t length_read, length_write;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	length_read = read(fd, buf, letters);
	close(fd);
	if (length_read == -1)
	{
		free(buf);
		return (0);
	}

	length_write = write(STDOUT_FILENO, buf, length_read);
	free(buf);
	if (length_read != length_write)
		return (0);

	return (length_write);
}
