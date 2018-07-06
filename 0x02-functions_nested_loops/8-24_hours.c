#include "holberton.h"

/**
 * jack_bauer - prints 00:00 to 23:59
 * Return: void
 */

void jack_bauer(void)
{
	int h, m, t1, o1, t2, o2;

	for (h = 0 ; h < 24 ; h++)
	{
		t1 = h / 10;
		o1 = h % 10;
		for (m = 0 ; m < 60 ; m++)
		{
			t2 = m / 10;
			o2 = m % 10;
			_putchar(t1 + '0');
			_putchar(o1 + '0');
			_putchar(':');
			_putchar(t2 + '0');
			_putchar(o2 + '0');
			if (h != 23 || m != 60)
			{
				_putchar('\n');
			}
		}
	}
}
