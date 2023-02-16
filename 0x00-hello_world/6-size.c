#include <stdio.h>
/**
 *  main - A program which prints the size of various types on the computer it is complied and run on
 *  Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int li;
	float f;

printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu bytes(s)\n", sizeof(i));
printf("Size of a long int: %lu bytes(s)\n", sizeof(l));
printf("Size of a long long int: %lu bytes(s)\n", sizeof(li));
printf("Size of a float: %lu bytes(S)\n", sizeof(f));
return (0);
}
