#include "main.h"

/**
 * print_to_98 - Print numbers from n to 98
 * @n: Anumber between 0 and 98
 * Return: void
 */

void print_to_98(int n)
{
	for (n; n <= 98; n++)
	{
		if (n <= 9)
		{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		}
		else
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n')
}
