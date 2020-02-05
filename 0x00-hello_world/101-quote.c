#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i=0;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	while(str[i]!='\0'){
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
