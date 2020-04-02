#include "holberton.h"
/**
*_strlen - function that that returns the length of a string.
*
*@s: pointer of char type.
*Return: - The length of a string.
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 *create_file- Function that creates a file.
 *
 *@filename: The name of the file to create.
 *@text_content: A NULL terminated string to write to the file.
 *
 *Return:->1 on success, -1 on failure (file can not be created,
 *file can not be written, write “fails”, etc…).
 *->if filename is NULL return -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, _strlen(text_content));
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
