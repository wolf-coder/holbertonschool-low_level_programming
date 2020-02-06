#include <stdio.h>
/**
 * main- Prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	for (char i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}
	putchar('\n');
}
