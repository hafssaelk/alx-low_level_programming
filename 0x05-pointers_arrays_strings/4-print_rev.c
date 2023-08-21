#include "main.h"

/**
 * print_rev - Prints a string in reverse order
 * @s: The string to be printed in reverse
 *
 * Description:
 * This function takes an input string and prints its characters in reverse
 * order. It first calculates the length of the string, then iterates through
 * the characters in reverse order, printing each character until it reaches
 * the beginning of the string. Finally, it adds a newline character to the
 * output to move to the next line.
 */
void print_rev(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }
    i--;
    while (i >= 0)
    {
        _putchar(s[i]);
        i--;
    }
    _putchar('\n');
}
