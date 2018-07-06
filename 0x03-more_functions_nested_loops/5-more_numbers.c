#include "holberton.h"

/**
 * more_numbers - prints 0 to 14 x 10
 * Return: void
 */

void more_numbers(void)
{
	int i, a, t, o;

	for (a = 0 ; a < 10 ; a++)
	{
		for (i = 0 ; i < 15 ; i++)
		{
			t = i / 10;
			o = i % 10;
			if (t > 0)
				_putchar(t + '0');
			_putchar(o + '0');
		}
		_putchar('\n');
	}
}
