#include "main.h"

/**
 * print_rev - Function that prints a string in reverse
 * @s: String to be printed
 * Return: Void
 */

void print_rev(char *s)
{
	int counter;
	int i;

	counter = 0;

	while (*s != '\0')
	{
		counter++;
	}

	for(i = counter; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
