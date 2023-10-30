#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - a funcyion that it read  a text file and prints
 * it to the POSIX standoutput
 * @filename: a text file being read
 * @letters: is the number of letters it should read and print
 * Return: if the file can not be opened or read it return (0)
 * if the filename is null it retun (0)
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *thebuffer;
ssize_t file;
ssize_t w, s;
file = open(filename, O_RDONLY);
if (file == -1)
return (0);
thebuffer = malloc(sizeof(char) * letters);
s = read(file, thebuffer, letters);
w = write(STDOUT_FILENO, thebuffer, s);
free(thebuffer);
close(file);
return (w);
}
