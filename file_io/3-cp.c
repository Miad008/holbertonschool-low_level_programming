#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @ac: The number of arguments.
 * @av: The arguments array.
 *
 * Return: 0 on success, or an exit status on failure.
 */
int main(int ac, char **av)
{
int from_fd, to_fd, bytes_read, bytes_written;
char buffer[1024];

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

from_fd = open(av[1], O_RDONLY);
if (from_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}

to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (to_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99);
}

while ((bytes_read = read(from_fd, buffer, 1024)) > 0)
{
bytes_written = write(to_fd, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}

if (close(from_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
exit(100);
}

if (close(to_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
exit(100);
}

return (0);
}
