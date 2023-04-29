#include "lists.h"
/**
 * free_listint - frees the list
 * @head: head of struct
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;
                
	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}

}
