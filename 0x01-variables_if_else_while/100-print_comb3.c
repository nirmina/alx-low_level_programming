#include <stdio.h>
/**
 * main-Entry code
 * Description: print diferent combination of two digit
 * Return: 0 (Success)
 */
int main(void)
{
int digit1 = 0, digit2;
while (digit1 <= 9)
{
digit2 = 0;
while (digi2 <= 9)
{
if (digit1 != digit2 && digit1 < digit2)
{
putchar(digit1 + 48);
putchat(digit2 + 48);
if (digit1 + digit2 != 17)
{
putchar(',');
putchar(' ');
}
}
digit2++;
}
digit1++;
}
putchar('\n');
return (0);
}

