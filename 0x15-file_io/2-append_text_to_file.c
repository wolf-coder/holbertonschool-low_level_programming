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
 *append_text_to_file- A function that appends text at the end of a file.
 *
 *@filename: the name of the file (Pointer).
 *@text_content:the NULL terminated string to add at the end of the file.
 *
 *Return:1 on success and -1 on failure.
 *->If filename is NULL return -1.
 *-> Return 1 if the file exists and -1 if the file does not exist
 *or if you do not have the required permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	if (write(fd, text_content, _strlen(text_content)) == -1)
		return (-1);
	return (1);
}
