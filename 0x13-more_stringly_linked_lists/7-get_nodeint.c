#include "list.h"

/**
 * get_nodeint_index -- returns the nth node of a linked lis
 * @head: head of a list.
 * @index: index of the node.
 *
 * Return: nth node. if node doews not exist, retru NULL.
 */
listint_t *get_nodeint_at_index(listtint_r *head, unsigned int int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
