#include "main.h"

/**
 * custom_read_textfile - reads a text file and prints the letters
 * @file_name: filename.
 * @num_letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t custom_read_textfile(const char *file_name, size_t num_letters)
{
    int file_descriptor;
    ssize_t num_read, num_written;
    char *buffer;

    if (!file_name)
        return (0);

    file_descriptor = open(file_name, O_RDONLY);

    if (file_descriptor == -1)
        return (0);

    buffer = malloc(sizeof(char) * (num_letters));
    if (!buffer)
    {
        close(file_descriptor);
        return (0);
    }

    num_read = read(file_descriptor, buffer, num_letters);
    num_written = write(STDOUT_FILENO, buffer, num_read);

    close(file_descriptor);
    free(buffer);

    return (num_written);
}
