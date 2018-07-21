#include "holberton.h"

/**
 * reverse_array - reverses array a
 * @a: array to be reversed
 * @n: length of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp = 0;

	for (i = 0 ; i <= ((n - 1) / 2) ; i++)
	{
		temp = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = temp;
	}
}
