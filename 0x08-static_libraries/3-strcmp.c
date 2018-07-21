#include "holberton.h"

/**
 * _strcmp - compares s1 and s2
 * @s1: one of the strings in question
 * @s2: one of the strings in question
 * Return: the difference between the strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		if (s2[i] == '\0')
			return (s1[i]);
		if (s2[i] != s1[i])
			return (s1[i] - s2[i]);
	}
	if (s2[i] != '\0')
		return (0 - s2[i]);
	return (0);
}
