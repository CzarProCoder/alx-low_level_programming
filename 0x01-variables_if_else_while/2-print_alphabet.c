#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (sucess)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}