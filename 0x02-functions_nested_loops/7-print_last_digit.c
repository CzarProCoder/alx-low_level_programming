#include "main.h"

/**
 * print_last_digit - Function to print the last digit
 * @n: Integer to be evaluate
 * @last_digit: The last digit of a number
 */

int print_last_digit(int n)
{
	int last_digit = (n % 10);

	if (last_digit < 0)
		last_digit *= -1;

	_putchar('0' + last_digit);

	return (last_digit);
}
