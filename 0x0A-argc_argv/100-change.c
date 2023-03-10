#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a function that prints minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if number is negative or 1 if number is not exact
 */
int main(int argc, char *argv[])
{
	int num;
	int change = 0;
	int coins[] = {25, 10, 15, 2, 1};
	int a;
	
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < 5 && num >= 0; a++)
	{
		while (num >= coins[a])
		{
			num -= coins[a];
			change++;
		}
	}
	printf("%d\n", change);
	return (0);
}
