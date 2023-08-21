#include "main.h"
/**
 * puts2 - it pints a character starting fromthe first character
 *  @str: character
 *  Return: void
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
