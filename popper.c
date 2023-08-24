#include "monty.h"
/**
 * fun_popper - remove a stack
 * @head: stack front
 * @counter: number index
 * Return: void
 */

void fun_popper(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;

	*head = h->next;
	free(h);
}


