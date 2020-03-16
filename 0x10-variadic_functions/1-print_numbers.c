#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers, followed by a new line.
 *
 *@separator: String to be printed as separator.
 *@n: Number of parameters.
 *
 *Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	const char *c = separator;

	if (n)
	{
		if (!separator)
			c = "";
		va_start(ap, n);
		printf("%d", va_arg(ap, int));
		for (i = 1 ; i < n - 1; i++)
			printf("%s%d ", c, va_arg(ap, int));
		if (i < n)
			printf("%s%d", c, va_arg(ap, int));
		va_end(ap);
		printf("\n");
	}

}
