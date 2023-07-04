#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: head pointer.
 *
 * Return: 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *tempo;
	listint_t *currentnod;

	if (head != NULL)
	{
		currentnod = *head;
		while ((tempo = currentnod) != NULL)
		{
			currentnod = currentnod->next;
			free(tempo);
		}
		*head = NULL;
	}
}
