#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: character
 * Return: void
 */
void print_rev(char *s)
{
int rev = 0;
while (s[rev] != '\0')
{
rev++;
}
for (rev = rev - 1; rev >= 0; rev--)
_putchar(s[rev]);
_putchar('\n');
}
