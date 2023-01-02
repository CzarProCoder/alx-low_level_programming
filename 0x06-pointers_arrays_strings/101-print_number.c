#include "main.h"

/**
 * print_number - Function that print an integer
 * @n: Integer to be printed
 */

void print_number(int n)
{
	int b = 0;

	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		n -= n;
	}
	else if (n > 0)
		while (n > 0)
		{
			b = (n / 10);
			_putchar('b');
			n /= 10;
		}
	_putchar('\n');
}
