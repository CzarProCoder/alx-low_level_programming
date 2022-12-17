#include "main.h"

/**
 * print_triangle - Function to print a triangle
 * @size: Size of the triangle
 * Return: Void
 */

void print_triangle(int size)
{
	int n;
	int c;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (c = 1; c <= n; c++)
			{
				_putchar('#');
			}
			_putchar("\n");
		}
	}
	else
		_putchar('\n');
}
