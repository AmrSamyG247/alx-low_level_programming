#include "lists.h"
/**
 * looped_listint_count - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head:  pointer to head pointer of linked list.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *pointer, *curser;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	pointer = head->next;
	curser = (head->next)->next;

	while (curser)
	{
		if (pointer == curser)
		{
			pointer = head;
			while (pointer != curser)
			{
				nodes++;
				pointer = pointer->next;
				curser = curser->next;
			}

			pointer = pointer->next;
			while (pointer != curser)
			{
				nodes++;
				pointer = pointer->next;
			}

			return (nodes);
		}

		pointer = pointer->next;
		curser = (curser->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely can free lists containing loops)
 * @h: A pointer to the address of the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
