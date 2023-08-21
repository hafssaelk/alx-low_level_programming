#include "main.h"

/**
 * _puts - Prints a string followed by a newline
 * @str: The string to be printed
 *
 * Description: This function prints each character of the input string
 *              until it reaches the null-terminator. It then adds a newline
 *              character to the output to move to the next line.
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    _putchar('\n');
}
