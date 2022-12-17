#include "main.h"

/**
 * print_diagonal - Function to draws a straight line in the terminal
 * @n: Numbers of times to print character \
 * Return: void
 */

void print_diagonal(int n)
{
	int c;
	int spaces;
	int spaces_count;

	if (n > 0)
	{
		c = 0;
		spaces = 0;

		while (c < n)
		{
			for (spaces_count = 0; spaces_count <= spaces; spaces_count++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			spaces++;
			c++;
		}

	}
	else
		_putchar('\n');
}
