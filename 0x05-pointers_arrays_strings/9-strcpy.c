#include "main.h"

/**
 * _strcpy - Copies a string from source to destination
 * @dest: Destination buffer
 * @src: Source string
 *
 * Description:
 * This function copies the string pointed to by 'src', including the
 * terminating null byte ('\0'), to the buffer pointed to by 'dest'.
 *
 * Return: The pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
    char *dest_ptr = dest;

    while (*src != '\0')
    {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
    }

    *dest_ptr = '\0'; // Add the terminating null byte

    return dest;
}
