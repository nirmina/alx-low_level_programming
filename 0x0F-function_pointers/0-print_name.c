#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -  a function that prints a name.
 * @name: char
 * @f: pointer to add
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
