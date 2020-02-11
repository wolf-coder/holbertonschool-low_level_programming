#include "holberton.h"
/**
 * _islower - A function that checks for lowercase character.
 *in lowercase, followed by a new line
 *@c: The character to check whether it is a lowercase or not.
 * Return: If lowercase 1 ,otherwise 0
 **/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
	return (1);
} else
{
	return (0);
}
}
