#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the opcodes of its own main function
 * @argc: number of elements
 * @argv: array of elements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num_byte;
	int i = 0;
	char *array;

	num_byte = atoi(argv[1]);
	if (num_byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	array = (char *)main;

	while (i < num_byte)
	{
		if (i == num_byte - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
		i++;
	}
	return (0);
}
