#include "holberton.h"

/**
*is_prime_number - function that returns 1 if the input integer
*is a prime number, otherwise return 0.
*Return:  returns 1 if the input integer is a prime number, otherwise return 0.
*@n: Natural number
*
 */

int is_prime_number(int n)
{
	return (check_prinme(2, n));
}


/**
 *check_prinme -function that checks if n is prime.
 *@n: Natural number
 *@i: incrimentator
 *Return: returns 1 if the input integer is a prime number, otherwise return 0.
 */
int check_prinme(int i, int n)
{
if (n < i)
	return (0);
else if (n > i)
	return (1);
if (n % i != 0 && i != n)
	return (check_prinme(n, i + 1));
return (1);
}
