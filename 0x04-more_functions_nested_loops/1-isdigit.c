#include "holberton.h"
/**
 *_isdigit - check whether digital.
 *@c: number input
 *Return: return 1 if is c digit else 0
 **/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
