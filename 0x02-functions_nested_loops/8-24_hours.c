#include "main.h"

/**
 * 
 *
 */

void jack_bauer(void)
{
	int h;
	int m;

	a = '0';

	while (h < '24')
	{
		h = '0';

		while (m <= '59')
		{
			y = '0';

			while (y <= '5')
			{
				z = '0';
				while (z <= '9')
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(y);
					_putchar(z);
					_putchar('\n');
					z++;
				}
				y++;
			}
			b++;
		}
		a++;
	}
}
