#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 * @head: pointer to the first node
 * @index: index of node to get
 * Return: pointer to node if not NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node;
unsigned int n;
node = head;
for (n = 0; (node && n < index); (node = node->next, n++))
;
return (node);
}
