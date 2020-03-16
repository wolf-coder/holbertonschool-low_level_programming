#include "3-calc.h"

/**
 *main- program that performs simple operations.
 *
 *@argc: Number of the parameters.
 *@argv: parameters string.
 *
 *Return: 99 inappropriate operator. 98 Wrong number of parameters.0 Success.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
