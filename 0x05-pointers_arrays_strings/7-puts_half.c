#include "main.h"
/**
 * puts_half -  a function that prints half of a string,
 * @str: variable
 * Return: void
 */
void puts_half(char *str)
{
int length;
int halflength;
int i;
while (str[length] != '\0')
{
length++;
}
halflength = (length - 1) / 2;
for (i = (halflength + 1); i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
