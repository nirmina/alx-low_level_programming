#include <stdio.h>
#include "lists.h"
/**
 * _strlen - Calculates the length of a null-terminated string.
 * @str: A pointer to the null-terminated string to calculate the length of.
 * Return: The length of the string.
 */
int _strlen(const char *str)
{
int length = 0;
if (!str)
return (0);
while (*str++)
length++;
return (length);
}
/**
 * print_list -  a function that prints all the elements of a list_t list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t s = 0;
while (h)
{
printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
s++;
}
return (s);
}
