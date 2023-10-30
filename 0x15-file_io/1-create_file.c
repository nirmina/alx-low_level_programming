#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - its a function that creates a file
 * @filename:  is the name of the file that it needs to be create
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 (mean success) , -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
int file, w;
int lenght = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (lenght = 0; text_content[lenght];)
lenght++;
}
file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(file, text_content, lenght);
if (file == -1 || w == 1)
return (-1);
close(file);
return (1);
}
