#include "main.h"

/**
 * print_to_98 - Print numbers from n to 98
 * @n: Anumber between 0 and 98
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
}
