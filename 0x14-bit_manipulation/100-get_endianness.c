#include <stdio.h>
#include "main.h"
/**
 * get_endianness - a function that checks the endianness if its big or little
 * and return the endiannas
 * Return: Big endian (0) else little endian if (1)
 */
int get_endianness(void)
{
unsigned int n;
char *i = (char *) &n;
n = 1;
return ((int)*i);
}
