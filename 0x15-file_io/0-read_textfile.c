#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile -  it reads a text file and prints it to the POSIX standoutput
 * @filename: text file being read
 * @letters: is the number of letters it should read and print
 * Return: if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t file;
ssize_t w;
ssize_t s;
file = open(filename, O_RDONLY);
if (file == -1)
return (0);
buf = malloc(sizeof(char) * letters);
s = read(file, buf, letters);
w = write(STDOUT_FILENO, buf, s);
free(buf);
close(file);
return (w);
}
