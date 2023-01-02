#include "main.h"

/**
 * print_number - Function that print an integer
 * @n: Integer to be printed
 */

void print_number(int n)
{
	int b;

	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		_putchar('-');
		n -= n;
	}
	while (n > 0)
	{
		if (n < 10)
		{
			_putchar(n + '0');
			break;
		}
		else if (n > 10)
		{
			b = (n / 10);
			_putchar(b + '0');
			n /= 10;
		}
	}
}