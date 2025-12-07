#include "main.h"
#define BUFFER_SIZE 1024

/**
 * error_exit - print error message and exit with specific code
 * @code: exit code
 * @message: message to print
 * @file: filename to print with message
 */
void error_exit(int code, const char *message, const char *file)
{
    dprintf(STDERR_FILENO, message, file);
    exit(code);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of args
 * @argv: args
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    ssize_t read_count, write_count;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        error_exit(97, "Usage: cp file_from file_to\n", "");

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        close(fd_from);
        error_exit(99, "Error: Can't write to %s\n", argv[2]);
    }

    while ((read_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        write_count = write(fd_to, buffer, read_count);
        if (write_count != read_count)
        {
            close(fd_from);
            close(fd_to);
            error_exit(99, "Error: Can't write to %s\n", argv[2]);
        }
    }

    if (read_count == -1)
    {
        close(fd_from);
        close(fd_to);
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);
    }

    if (close(fd_from) == -1)
        error_exit(100, "Error: Can't close fd %d\n", argv[1]);

    if (close(fd_to) == -1)
        error_exit(100, "Error: Can't close fd %d\n", argv[2]);

    return (0);
}
