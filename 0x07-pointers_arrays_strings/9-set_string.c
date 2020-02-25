#include "holberton.h"
/**
* set_string -Function that sets the value of a pointer to a char.
* @s : pointer to a pointer that points to an array.
* @to : pointer to a an array.
*Return: Void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
