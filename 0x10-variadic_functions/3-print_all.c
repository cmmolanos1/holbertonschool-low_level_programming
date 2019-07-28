#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints all the given strings.
 * @format: the kind of format c for char s for string i for int f for
 * float.
 * Return: a string with tha arguments.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list arguments;
	char *s;

	va_start(arguments, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c",  va_arg(arguments, int));
			break;
		case 'i':
			printf("%i",  va_arg(arguments, int));
			break;
		case 'f':
			printf("%f",  va_arg(arguments, double));
			break;
		case 's':
			s = va_arg(arguments, char*);
			if (s)
			{
				printf("%s", s);
				break;
			}
			else
			{
				printf("(nil)");
				break;
			}
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arguments);
}
