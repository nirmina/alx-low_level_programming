#include "main.h"
#include <stdio.h>
/**
 * rev_string - a function that reverses a string.
 * @s: character
 * Return: void
 */
void rev_string(char *s)
{
int length = 0;
int i;
char j;
while (s[length] != '\0')
{
length++;
}
for (i = 0; i < length / 2; i++)
{
j = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = j;
}
}
