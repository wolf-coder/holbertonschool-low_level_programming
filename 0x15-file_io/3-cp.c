#include "holberton.h"
#define MODE_T_FILE (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 *copy_to_file- A program that copies the content of a file to another file.
 *
 *@file_from: A string representing the file name to get its content copied.
 *@file_to: A string resenting the file name to get te content of file_from.
 *
 *Return:Always 0.
 */
void copy_to_file(const char *file_from, const char *file_to)
{
	int fd;
	ssize_t rd, wr;
	char buff[1024];

	if (!file_from)
		exit(1);
	fd = open(file_from, O_RDONLY);
	if (fd ==  -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	rd = read(fd, buff, 1024);
	if (rd ==  -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
		exit(100);
	}

	fd = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, MODE_T_FILE);
	if (fd ==  -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", file_to);
		exit(99);
	}
	wr = write(fd, buff, rd);
	if (wr ==  -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", file_to);
		exit(99);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 *main- Aprogram that copies the content of a file to another file.
 *
 *@argc: number of arguments.
 *@argv: array of pointers containing the arguments strings memory address
 *
 *Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_to_file(argv[1], argv[2]);
	return (0);
}
