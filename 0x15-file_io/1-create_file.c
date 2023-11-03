#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file @filename.
 *
 * Description: The created file must have those permissions: rw-------.
 * If the file already exists, we do not change the permissions.
 * if the file already exists, we truncate it. if filename is NULL return -1.
 * if text_content is NULL, we create an empty file.
 *
 * Return: returns 1 if it success, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, number_letters, bytes_written;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (number_letters = 0; text_content[number_letters]; number_letters++)
		;

	bytes_written = write(file_descriptor, text_content, number_letters);

	if (bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
