#include "3-calc.h"
/**
 *op_add - Function that returns the 'addition' operation.
 *
 *@a:operand.
 *@b:operand.
 *
 * Return: result of the addition.
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - Function that returns the 'substraction' operation.
 *
 *@a:operand.
 *@b:operand.
 *
 * Return: result of the substraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - Function that returns the 'multiplication' operation.
 *
 *@a:operand.
 *@b:operand.
 *
 * Return: result of the multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - Function that returns the 'division' operation.
 *
 *@a:operand.
 *@b:operand.
 *
 * Return: result of the division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - Function that returns the 'modulo' operation.
 *
 *@a:operand.
 *@b:operand.
 *
 * Return: result of the modulo.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
