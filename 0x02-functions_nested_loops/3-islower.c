#include "holberton.h"

/**
 * main - Entry point
 * @c: string to run
 * function that checks for lowercase character.
 * Return: 1 if c is lowercase
 * otherwise Return 0
 */

int _islower(int c);
{
	if (c >= 97 && c <= 122)
       	return (1);
	else
	return (0);
}
