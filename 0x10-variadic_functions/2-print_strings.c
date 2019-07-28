#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints all the given strings.
 * @separator: define character to separate the strings.
 * @n: number of strings to be printed.
 * Return: a string with strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	char *s;

	va_start(arguments, n);

	for (i = 1; i <= n; i++)
	{
		s = va_arg(arguments, char*);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator && i < n)
			printf("%s", separator);
		else
		{
			;
		}
	}
	printf("\n");
	va_end(arguments);
}
