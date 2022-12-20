#include <stdio.h>

/**
 * print_array - Function to print n elements
 * @a: Array to be printed
 * @n: Second Integer
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);
	printf("\n");
}
