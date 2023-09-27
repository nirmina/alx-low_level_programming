#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: ponter to the first node on the list
 * Return:  the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *node;
int n;
if (!head || !*head)
return (0);
node = (*head)->next;
n = (*head)->n;
free(*head);
*head = node;
return (n);
}
