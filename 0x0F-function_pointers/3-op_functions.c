#include "3-calc.h"

/**
 * op_add - adds two integers together
 * @b: another integer
 * @a: an integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts one number from another
 * @a: an integer
 * @b: another integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiples 2 integers
 * @a: an integer
 * @b: another integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides one inetger by another
 * @a: an integer
 * @b: another integer
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds reminder when one integer is divided by another
 * @a: an integer
 * @b: another integer
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
