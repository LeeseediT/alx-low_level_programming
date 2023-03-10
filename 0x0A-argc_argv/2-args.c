#include <stdio.h>
#include "main.h"
/**
 * main - a function that prints the name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	{
	printf("%s\n", argv[arg]);
	}
	return (0);
}
