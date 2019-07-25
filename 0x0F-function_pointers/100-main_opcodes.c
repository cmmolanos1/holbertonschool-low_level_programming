#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - generates opcodes.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: the opcodes
 */
int main(int argc, char **argv)
{
	int i, number;

	number = atoi(*(argv + 1));

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		puts("Error");
		exit(2);
	}

	for (i = 0; i < number; i++)
	{
		printf("%02hhx ", ((char *)main)[i]);
		if (i == (number - 1))
		{
			printf("%02hhx\n", ((char *)main)[i]);
		}
	}
	return (0);
}
