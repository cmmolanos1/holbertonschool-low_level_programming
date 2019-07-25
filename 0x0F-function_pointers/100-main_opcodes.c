#include <stdio.h>
#include <stdlib.h>
/**
 * main - generates opcodes.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: the opcodes
 */
int main(int argc, char **argv)
{
	int i, number = 0;

	number = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (number < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < number; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i != (number - 1))
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
