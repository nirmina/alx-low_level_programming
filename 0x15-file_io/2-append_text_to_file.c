#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: the string whose lenght to check
 * Return: integer length of string
 */
int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename:  is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file;
ssize_t bytes = 0;
ssize_t lenght = _strlen(text_content);
if (!filename)
return (-1);
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
return (-1);
if (lenght)
bytes = write(file, text_content, lenght);
close(file);
return (bytes == lenght ? 1 : -1);
}
