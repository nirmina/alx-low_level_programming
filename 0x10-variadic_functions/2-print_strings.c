#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings
 * @separator: the string to be printed between the strings
 * @n: he number of strings passed to the function
 * @...: a variable of numbers
 * Return: void
 * Description: If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int i = n;
char *s;
if (!n)
{
printf("\n");
return;
}
va_start(strings, n);
while (i--)
printf("%s%s", (s = va_arg(strings, char *)) ? s : "(nil)",
i ? (separator ? separator : "") : "\n");
va_end(strings);
}
