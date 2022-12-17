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
		for (n = 0; n <= size; n++)
		{
			for (c = 0; c <= n; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
