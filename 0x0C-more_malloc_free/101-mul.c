#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * allDigits - checks if all the characters are digits.
 * @arg: the arguments of program.
 * Return: 1 all digits 0 otherwise.
 */
int allDigits(char **arg)
{
	int i, j;

	for (i = 1; i <= 2; i++)
		for (j = 0; arg[i][j]; j++)
		{
			if (arg[i][j] < '0' || arg[i][j] > '9')
				return (0);
		}
	return (1);
}
/**
 * _atoi - print the integer of a char.
 * @s:  tested char
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int counter, i, j, k, length, num, l;
	int aux;

	aux = 1;
	counter = 0;
	num = 0;

	while (*(s + counter) != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		if (*(s + i) <= '9' && *(s + i) >= '0')
		break;
	}
	for (j = i; j < counter; j++)
	{
		if (!(*(s + j) <= '9' && *(s + j) >= '0'))
			break;
	}

	for (k = 0; k < i; k++)
	{
		if (*(s + k) == '-')
			aux = -aux;
	}
	length = j - i;
	l = i;
		while (length >= 1)
	{
		num = num * 10 + (*(s + l) - '0');
		l++;
		length--;
	}
	return (num * aux);
}
/**
 * main - multiplies 2 positive numbers.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	unsigned long int mul;

	if (argc != 3 || allDigits(argv) != 1)
	{
		puts("Error");
		exit(98);
	}

	mul = _atoi(argv[1]) * _atoi(argv[2]);

	printf("%lu\n", mul);
	return (0);
}
