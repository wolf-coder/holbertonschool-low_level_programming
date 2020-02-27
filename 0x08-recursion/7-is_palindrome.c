#include "holberton.h"
/**
 * strLen - string length.
 * @s: array
 * Return: int
 */
int strLen(char *s)
{
	if (*s != '\0')
		return (1 + strLen(s + 1));
	else
		return (0);
}

/**
 *Check - palindrome
 *@i: int
 *@s: char
 *@leng: int
 *Return: int
 */
int Check(int i, int leng, char *s)
{
	if (i > leng / 2)
		return (1);
	else if (s[i] != s[leng - i - 1])
		return (0);
	else
		return (Check(i + 1, leng, s));
}

/**
 *is_palindrome - function that returns 1 if a string is a
 *palindrome and 0 if not.
 *@s: char
 *Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (1);
	len = strLen(s);
	return (Check(0, len, s));
}
