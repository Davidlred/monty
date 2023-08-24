#include "monty.h"
/**
 * fun_rotl - rotates the stack
 * @head: head of stack
 * @counter: number index
 * Return: void
 */

void fun_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head;

	stack_t *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		printf("stack underflow");
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}

