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

	while (format)
	{
		switch(format[i]){
		case 'c' :
			printf("%c",  va_arg(ap, char);
			break;
		case 'i' :
		        printf("%i",  va_arg(ap, int);
		case 'f' :
		        	       
			       
		}
		i++;
	}

}
