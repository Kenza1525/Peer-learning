#include "lists.h"
#include <stdlib.h>

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *temp = NULL;
	listint_t *temp2 = NULL;
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = number;
	
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}

	temp = *head;
	temp2 = *head;

	while (temp->next != NULL)
	{
		if (temp->n < new->n && temp->next->n >= new->n)
		{
			new->next = temp->next;
			temp->next = new;
		}

		temp = temp->next;

	}

	if (temp->n <= new->n)
	{
		new->next = NULL;
		temp->next = new;
	}
	if (temp2->n >= new->n)
	{
		new->next = temp2;
		*head = new;
	}
	return (new);
	
}
