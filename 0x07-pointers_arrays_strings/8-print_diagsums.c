#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagnols
 * @a: The square matrix
 * @size: Size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int row = 0;
	int column;
	unsigned int sum = 0;
	unsigned int sum2 = 0

	for (row < size)
	{
		column = row;
		sum += a[row][column];
		sum2 += a[row][(size - 1) - column];
	}
	printf("%u, %u", sum, sum2);
}
