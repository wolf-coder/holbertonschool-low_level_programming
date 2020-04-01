#include "holberton.h"

/**
 *read_textfile- A function that reads a text file and prints it
 *to the POSIX standard output.
 *
 *@filename: String representing the file name.
 *@letters: number of letter to be printed ont the monitor.
 *
 *Return:->  actual number of letters it could read and print.
 *-> 0 if filename is NULL.
 *-> 0 if write fails or does not write the expected amount of bytes.
 *-> 0 if the file can not be opened or read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	off_t size;
	char *buff = NULL;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	size = lseek(fd, 0, SEEK_END);
	lseek(fd, 0, SEEK_SET);
	buff = malloc(sizeof(char) * size);
	if (!buff)
		return (0);
	read(fd, buff, letters);
	dprintf(STDOUT_FILENO, "%s", buff);
	close(fd);
	return (size);
}
