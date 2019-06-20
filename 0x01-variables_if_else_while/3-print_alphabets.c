#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lLower;
	char lUpper;

	lLower = 'a';
	lUpper = 'A';

	while (lLower <= 'z')
	{
		putchar(lLower);
		lLower++;
	}

	while (lUpper <= 'Z')
	{
		putchar(lUpper);
		lUpper++;
	}

	putchar('\n');
	return (0);
}
