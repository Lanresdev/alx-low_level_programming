#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * read_textfile - reads a text file and prints it to POSIX standard
 * @filename: the name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters read and printed or 0 if an error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
    {
        return (0);
    }

    int fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        return (0);
    }

    char *buf = (char *) malloc(letters * sizeof(char));
    if (buf == NULL)
    {
        close(fd);
        return (0);
    }

    ssize_t nread = read(fd, buf, letters);
    if (nread == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    ssize_t nwritten = write(STDOUT_FILENO, buf, nread);

    if (nwritten != nread)
    {
        free(buf);
        close(fd);
        return (0);
    }

    free(buf);
    close(fd);

    return (nread);
}
