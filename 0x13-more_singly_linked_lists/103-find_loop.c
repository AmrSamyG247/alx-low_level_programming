#include "lists.h"
/**
 * find_listint_loop - find loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pointer, *curser;

	/* determine if loop exists by seeing if pointer and curser meets */
	/* start them at head, move pointer one node and curser two nodes */
	pointer = curser = head;

	while (pointer != NULL && curser != NULL)
	{
		pointer = pointer->next;
		curser = curser->next->next;

		if (pointer == curser)
		{
			/* start pointer at head and curser at address they met */
			/* move pointer and curser one node to find loop origin */
			pointer = head;
			while (pointer != curser)
			{
				pointer = pointer->next;
				curser = curser->next;
			}
			return (pointer);
		}
	}

	return (NULL);
}
