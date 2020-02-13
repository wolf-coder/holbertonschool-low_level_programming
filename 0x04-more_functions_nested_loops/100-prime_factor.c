#include <stdio.h>
/**
* main - finds and prints the largest prime factor
*of the number 612852475143.
*
* Return: 0 Succes.
*/
int main(void)
{
	unsigned long int n = 0;
	unsigned long int num = 612852475143, pg = 0;
	unsigned long int m = 0, i, flag = 0;

	for (n = 1; n < num; ++n)
	{
		if (num % n == 0)
		{
			flag = 0;
			m = n / 2;
			for (i = 2; i <= m; i++)
			{
				if (n % i == 0)
				{
				flag = 1;
				break;
				}
			}
			if (flag == 0 && n != 1)
			{
				if (pg < n)
					pg = n;
			}
		}
	}
	printf("%lu\n", pg);
	return (0);
}
