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

	return (0);
}
