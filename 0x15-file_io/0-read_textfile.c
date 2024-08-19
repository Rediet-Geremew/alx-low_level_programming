#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 *
 * Return:  the actual number of letters it could read and print
 *          0, if the file can not be opened or read, filename is null, or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) *letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytes_read = read(file, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);
	return (0);
}
