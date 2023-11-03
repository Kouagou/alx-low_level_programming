#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 *
 * Description: we do not create the file if it does not exist.
 * If filename is NULL return -1. If text_content is NULL,
 * we do not add anything to the file. We return 1 if the file exists
 * and -1 if the file does not exist or if you do not have
 * the required permissions to write the file.
 *
 * Return: returns 1 if the file exists, -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, number_letters, bytes_written;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		for (number_letters = 0; text_content[number_letters]; number_letters++)
			;

		bytes_written = write(file_descriptor, text_content, number_letters);

		if (bytes_written == -1)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
