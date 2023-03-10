#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - a function that adds postive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if there is no number or 1 if not digits
 */
int main(int argc, char *argv[])
{
	int a;
	unsigned int sum = 0, b;
	char *str;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			str = argv[a];
			for (b = 0; b < strlen(str); b++)
			{
				if (str[b] < 48 || str[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(str);
			str++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
	}
