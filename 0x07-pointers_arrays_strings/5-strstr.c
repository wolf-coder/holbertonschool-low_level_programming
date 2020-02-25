#include "holberton.h"
#include <string.h>
/**
*strstr -  This function that locates a substring.
*
*@haystack: Pointer to the array.
*@needle: A ponter to a match string.
*
*Return: Returns a pointer to the beginning of the located substring, or NULL
*if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int  j = 0;
	unsigned int lenNeedle = _strlen(needle);
	unsigned int count = 0;

	while (haystack[0] != '\0')
	{
		for (j = 0; j < lenNeedle; ++j)
		{
			if (haystack[j] == needle[j])
			{
				count++;
			}
		}
		if (count == lenNeedle)
			return (haystack);
		count = 0;
		haystack++;
	}
	return (0);
}
/**
* _strlen - function that that returns the length of a string.
* @s : pointer to a string.
* Return: string lenght
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
