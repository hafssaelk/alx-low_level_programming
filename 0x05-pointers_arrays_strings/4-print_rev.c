#include "main.h"

/**
 * print_reve - print the  string backward .
 * @s : string .
 * Return : void .
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
