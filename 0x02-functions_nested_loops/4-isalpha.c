#include "holberton.h"
/**
 * _isalpha - A  function that checks for alphabetic character.
 *in lowercase, followed by a new line
 *@c: The character to check whether it is alphabetic.
 * Return: If alpha 1 ,otherwise 0
 **/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
