# include "main.h"

/**
 * _strcpy - copie strings pointed 2 by src into dest.
 * @dest : destination.
 * @src : sources.
 * Return : character avec copi of strings.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
