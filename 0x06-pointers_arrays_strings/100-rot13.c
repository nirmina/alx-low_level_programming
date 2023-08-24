#include "main.h"
#include <stdio.h>
/**
 * rot13 -  a function that encodes a string using rot13
 * Return: the character n
 * @n: a character
 */
char *rot13(char *n)
{
int i;
int j;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (n[i] == data1[j])
{
n[i] = data2[j];
break;
}
}
}
return (n);
}
