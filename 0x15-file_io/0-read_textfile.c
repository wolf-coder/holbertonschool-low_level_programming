#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
	size_t i;
	char *buff = NULL;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	read(fd, buff, letters);
	for (i = 0; i < letters; i++)
		_putchar(buff[i]);
	return (letters);
}
