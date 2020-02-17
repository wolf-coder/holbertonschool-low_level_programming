#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "holberton.h"
/**
* main - Determine whether a number is positive,negative or null
* Return: 0
**/
void positive_or_negative(int n)
{

if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("%d is zero\n", n);
}
else
{
	printf("%d is negative\n", n);
}
// return (0);
}
