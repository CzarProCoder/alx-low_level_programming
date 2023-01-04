#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagnols
 * @a: The square matrix
 * @size: Size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int row = 0, column;
	unsigned int sum = 0;

	while (row < size)
	{
		column = row;
		if (row != ((size - 1) - row) && column != ((size - 1) - column))
			sum += a[row][column] + a[(size - 1) - row][(size - 1) - column];
		else
			sum += a[row][column];
		row++;
	}
	printf("%u\n", sum);
}
