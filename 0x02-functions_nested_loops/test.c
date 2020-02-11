// #include "holberton.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

int _islower(int c) 
{
if (_islower(c))
{
    return (1);
}          
}

int main(void)
{
    int r;
    r = _islower('a');
    // _putchar(r + '0');
    // r = _islower('o');
    // _putchar(r + '0');
    // r = _islower(108);
    // _putchar(r + '0');
    // _putchar('\n');
     _putchar('r');_putchar('\n');
    return (0);
}

