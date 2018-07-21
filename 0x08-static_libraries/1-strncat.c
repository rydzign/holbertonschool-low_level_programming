#include "holberton.h"

/**
 * _strlen - returns length of str s
 * @s: string to be measured
 * Return: length of s
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}


/**
 * _strncat - Concatanates dest and n bytes of src
 * @dest: One of the strings in question
 * @src: One of the strings in question
 * @n: the amount of bytes to concatanate
 * Return: the concatanated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = _strlen(dest);
	for (i = 0 ; (*(src + i) != '\0') && (i < n) ; i++)
	{
		*(dest + (len + i)) = *(src + i);
	}
	*(dest + (len + i)) = '\0';
	return (dest);
}
