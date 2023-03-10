#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a function that multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if there is not 2 numbers and 0 if success
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int multi = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		multi = num1 * num2;
		printf("%d\n", multi);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
