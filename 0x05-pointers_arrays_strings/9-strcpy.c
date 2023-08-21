#include "main.h"

/**
 * main - Entry point
 *
 * Description:
 * This program demonstrates the usage of the _strcpy function by copying
 * various strings to destination buffers and printing the results.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char buffer[100];

    // Test regular string
    _strcpy(buffer, "Holberton!");
    printf("Correct output: str = \"%s\"\n", buffer);

    // Test long string
    _strcpy(buffer, "Lorem ipsum dolor sit amet, consectetur adipiscing elit.");
    printf("Correct output: str = \"%s\"\n", buffer);

    // Test empty string
    _strcpy(buffer, "");
    printf("Correct output: str = \"%s\"\n", buffer);

    // Check for null termination
    _strcpy(buffer, "Hello");
    if (buffer[_strlen(buffer)] == '\0')
        printf("Null-terminated: Yes\n");
    else
        printf("Null-terminated: No\n");

    return (0);
}
