#include "holberton.h"
/**
 * _isupper -  checks for uppercase character.
 *@c: the character to check whether it is uppercase or not.
 * Return: 1 if c is uppercase , 0 otherwise.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
