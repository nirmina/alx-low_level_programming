#include "main.h"
/**
 * _puts - a function that prints a string , to stdout
 * @str: character
 * Return: void
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
