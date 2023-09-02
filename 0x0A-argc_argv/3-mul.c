#include "main.h"
#include <stdio.h>
/**
 *  _atoi -  a function that convert a string to an integer
 *  @s: input string
 *  Return: int
 */
int _atoi(char *s)
{
unsigned int count = 0;
unsigned int size = 0;
unsigned int a = 0;
unsigned int b = 1;
unsigned int c = 1;
unsigned int i;
while (*(s + count) != '\0')
{
if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
break;
if (*(s + count) == '-')
b *= -1;
if ((*(s + count) >= '0') && (*(s + count) <= '9'))
{
if (size > 0)
c *= 10;
size++;
}
count++;
}
for (i = count - size; i < count; i++)
{
a = a + ((*(s + i) - 48) * c);
c /= 10;
}
return (a *b);
}
/**
 * main -  a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (sucess) and 1 (Error)
 */
int main(int argc, char *argv[])
{
int result, num1, num2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}

