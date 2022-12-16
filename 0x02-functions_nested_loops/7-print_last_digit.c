#include "main.h"

/**
 * print_last_digit - Function to print the last digit
 * @n: Integer to be evaluate
 * @last_digit: The last digit of a number
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = (n % 10);

	_putchar(last_digit);

	return (last_digit);
}
