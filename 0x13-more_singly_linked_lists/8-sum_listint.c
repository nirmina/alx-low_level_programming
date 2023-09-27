#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint -  a function that returns the sum of all the data of a linklist
 * @head: pointer to the first node
 * Return: sum of all the data of linked list
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
