#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: unsigned int
 * Return:  a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *s;
s = malloc(b);
if (s == NULL)
exit(98);
return (s);
}
