#include "main.h"

/**
 * 
 *
 */

void jack_bauer(void)
{
	int a;
	int b;
	int y;
	int z;

	a = 0;

	while (a <= 2)
	{
		b = 0;

		while (b <= 3)
		{
			y = 0;

			while (y <= 5)
			{
				z = 0;
				while (z <= 9)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':')
					_putchar(y);
					_putchar(z);
					z++;
				}
				y++;
			}
			b++;
		}
		a++;
	}
	return (0);

}
