#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in a linkedList
 * @h: linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}
