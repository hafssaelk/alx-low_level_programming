#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    long num1, num2;
    long mul;
    int i, j;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (j == 0 && (argv[i][j] == '+' || argv[i][j] == '-'))
            {
                // Allow leading plus or minus sign
                continue;
            }
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return (98);
            }
        }
    }

    num1 = atol(argv[1]);
    num2 = atol(argv[2]);

    if (num1 <= 0 || num2 <= 0)
    {
        printf("Error\n");
        return (98);
    }

    mul = num1 * num2;
    printf("%ld\n", mul);

    return (0);
}
