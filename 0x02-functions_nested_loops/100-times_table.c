#include "holberton.h"

/**
 * print_table_format - Outputs a correctly formatted single integer
 * @a: a table input
 * @b: b table input
 *
 * Return: void
 */
void print_table_format(int a, int b)
{
	int m, n, t, o;

	m = a * b;
	n = m / 100;
	t = (m / 10) % 10;
	o = m % 10;
	if (b == 0)
		_putchar(m + '0');
	else if (n > 0)
	{
		_putchar(' ');
		_putchar(n + '0');
		_putchar(t + '0');
		_putchar(o + '0');
	}
	else if (t > 0)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(t + '0');
		_putchar(o + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(o + '0');
	}
}


/**
 * print_times_table - prints nxn times table
 * @n: dimension of table 0<n<15
 *
 * Return: void
 */

void print_times_table(int n)
{
	int a, b;

	if (n >= 0 && n <= 15)
	{
		for (a = 0 ; a <= n ; a++)
		{
			for (b = 0 ; b <= n ; b++)
			{
				print_table_format(a, b);
				if (b < n)
				{
					_putchar(',');
				}
				else
				{
					_putchar('\n');
				}
			}
		}
	}
}
