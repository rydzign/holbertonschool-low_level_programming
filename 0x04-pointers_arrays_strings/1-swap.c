#include "holberton.h"

/**
 * swap_int - swaps value of 2 int
 * @a: pointer to one of the integers to be swapped
 * @b: pointer to one of the integers to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
