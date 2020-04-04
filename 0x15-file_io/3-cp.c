#include "holberton.h"
#define MODE_T_FILE (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 *check_close- A function that check close call success.
 *
 *@n: File Descriptor.
 *Return:Void.
 */

void check_close(int n)
{
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n);
		exit(100);
	}
}
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
	int fd, fd1, cl, cl1;
	ssize_t rd = 0, wr;
	char buff[1024];

	fd = open(file_from, O_RDONLY);
	if (fd ==  -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd1 = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, MODE_T_FILE);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	do {
		rd = read(fd, buff, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		wr = write(fd1, buff, rd);
		if (wr ==  -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	} while (rd == 1024);
	cl = close(fd);
	check_close(cl);
	cl1 = close(fd1);
	check_close(cl1);
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
	int a = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_to_file(argv[1], argv[2]);
	return (a);
}
