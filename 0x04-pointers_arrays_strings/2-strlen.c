#include "holberton.h"

/**
 * _strlen - returns string length
 * @s: pointer to string
 * 
 * Return: length of s
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != '\0')
	{
		p++;
	}
	return (p);
}
