#include "main.h"

/**
 * main - Entry Point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always zero
 */

int main(int argc, char **argv)
{
	char *a;
	a = argv[1];

	if (argc > 0)
	{		
		while (*a != '\0')
		{
			_putchar(*a);
		}
		_putchar('\n');
	}
	return (0);
}
