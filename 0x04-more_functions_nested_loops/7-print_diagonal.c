#include "main.h"

/**
 * print_diagonal - Function to draws a straight line in the terminal
 * @n: Numbers of times to print character \
 * Return: void
 */

void print_diagonal(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			_putchar('\\');
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
