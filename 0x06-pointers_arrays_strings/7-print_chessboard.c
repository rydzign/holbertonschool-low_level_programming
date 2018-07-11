#include <stdio.h>
#include "holberton.h"

/**
 * print_chessboard - print chess board
 * @a: a pointer point to board
 */
void print_chessboard(char (*a)[8])
{
	int i;

	_putchar((*a)[0]);
	for (i = 2; i <= 64; i++)
	{
		if (i % 8 == 0)
		{
			_putchar((*a)[i - 1]);
			_putchar('\n');
		}
		else
			_putchar((*a)[i - 1]);
	}
}
