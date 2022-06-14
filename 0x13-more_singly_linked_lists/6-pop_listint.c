#include "lists.h"

/**
 * pop_listint - will delete the head node of a linked list
 * @head: head of list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == Null)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);
	
	*head = h;

	return (hnode);
}