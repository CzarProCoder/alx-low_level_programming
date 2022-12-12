#include <stdio.h>

/**
 * main - Entry point
 * dg: A digit vaue from 0 to 9
 * ch: An alphabet from a to f
 * Return: Always 0 (Success)
 */

int main(void)
{
	char dg;
	char ch;

	for (dg = '0'; dg <= '9'; dg++)
		putchar(dg);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
