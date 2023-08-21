#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of the string, excluding the null-terminator
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
