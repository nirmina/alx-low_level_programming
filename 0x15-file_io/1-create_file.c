#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename:  is the name of the file to create
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 (success) , -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{

