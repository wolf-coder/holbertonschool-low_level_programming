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
 *_pow_to_2- A function that get the power of 2 by n.
 *
 *@n: Power operand number.
 *
 *Return: The result of 2 power n.
 */
unsigned int _pow_to_2(unsigned int n)
{
	unsigned int res = 1;

	while (n != 0)
	{
		res *= 2;
		n--;
	}
	return (res);
}
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 *  memory, which contains a copy of the string given as a parameter.
 *@str : array.
 * Return: pointer to a new string , NULL if str = NULL , on success eturns a
 * pointer to the duplicated string
 */

char *_strdup(const char *str)
{
	int i = 0, len = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < len  ; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}
/**
 *binary_to_uint- A function that converts a binary number to an unsigned int.
 *
 *@b:Pointer pointing to a string of 0 and 1 chars.
 *
 *Return: the converted number, or 0 if:
 *there is one or more chars in the string b that is not 0 or 1.
 *b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, res = 0, len = 0;
	char *str = NULL;

	if (!b)
		return (0);
	str = _strdup(b);
	len = (unsigned int)_strlen(str);
	for (i = 0 ; str[i] != '\0'; i++)
	{
		if (str[i] != '0' && str[i] != '1')
			return (0);
	}
	i = 0;
	while (i != len)
	{
		res += ((str[len - i - 1] - '0') * _pow_to_2(i));
		i++;
	}
	return (res);
}
