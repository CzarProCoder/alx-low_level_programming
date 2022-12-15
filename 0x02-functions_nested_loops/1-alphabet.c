#include "main.h"

/**
 * main -
 * Return: 
 **/

int main(void)
{
	char ch;
	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	
	return (0);
}
