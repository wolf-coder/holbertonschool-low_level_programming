#include <stdio.h>
#include "holberton.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

a = -4756; b = 3647; c = -1;
        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}