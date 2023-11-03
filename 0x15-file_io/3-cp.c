#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/fd_file.h>
#include <sys/types.h>

void check_file(int fd_file, int file_descriptor, char *filename, char mode);
/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: an array of strings containing the arguments.
 *
 * Return: returns 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	char buf[1024];
	int source, destination, number_read = 1024;
	int bytes_written, close_source, close_destination;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	check_file(source, -1, argv[1], 'O');
	destination = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_file(destination, -1, argv[2], 'W');
	while (number_read == 1024)
	{
		number_read = read(source, buf, sizeof(buf));
		if (number_read == -1)
			check_file(-1, -1, argv[1], 'O');
		bytes_written = write(destination, buf, number_read);
		if (bytes_written == -1)
			check_file(-1, -1, argv[2], 'W');
	}
	close_source = close(source);
	check_file(close_source, source, NULL, 'C');
	close_destination = close(destination);
	check_file(close_destination, destination, NULL, 'C');
	return (0);
}

/**
 * check_file - A function that checks if a file can be opened or closed.
 * @fd_file: file descriptor of the file to be opened.
 * @filename: name of the file to be opened.
 * @mode: closing or opening mode.
 * @file_descriptor: the file descriptor.
 *
 * Return: void
 */
void check_file(int fd_file, int file_descriptor, char *filename, char mode)
{
	if (mode == 'C' && fd_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
	else if (mode == 'O' && fd_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && fd_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
