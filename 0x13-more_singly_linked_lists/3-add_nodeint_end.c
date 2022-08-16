#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the listint_t list
 * @head: this is the head of the singly linked list
 * @n: the data the new node will hold
 *
 * Return: the address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = NULL;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
