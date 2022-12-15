#include "main.h"

/**
 * print_alphabet_x10 - Function to print 10 times the alphabet in lowercase
 * Return: Does not return any value(s)
 */

void print_alphabet_x10(void);
{
	int i;

	i = 1;

	while (i <= '10')
	{
		char ch;

		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}
