#include "holberton.h"
/**
*_isdigit -  checks for uppercase character.
*@c: the character to check whether it is digital or not.
* Return: 1 if c is digital , 0 otherwise.
**/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
