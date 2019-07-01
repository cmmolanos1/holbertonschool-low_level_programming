/**
 * swap_int - swap the values of two integers.
 * @a: pointer a
 * @b: pointer b;
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
