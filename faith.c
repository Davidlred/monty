#include "monty.h"
/**
 * fun_rotr - rotates the stcak to the bottom
 * @head: head of stack
 * @counter: number index
 * Return: void
 */

void fun_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		printf("stacck underflow\n");
		return;
	}
	while (copy->next)
		copy = copy->next;
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}

