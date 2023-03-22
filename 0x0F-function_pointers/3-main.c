#include "function_pointers.h"
#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - a program that performs simple operations
 * @argc: number of arguments in program
 * @argv: an array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char oper;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	func = get_op_func(argv[2]);
	num2 = atoi(argv[3]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	oper = *argv[2];
	if ((oper == '/' && num2 == 0) ||
		(oper == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}
