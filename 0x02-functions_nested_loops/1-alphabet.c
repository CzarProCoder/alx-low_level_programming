#include "main.h"

/**
 * main -
 * Return: 
 **/

void print_alphabet(void)
{
	char ch;
	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

	return;
}
