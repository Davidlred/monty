#include "monty.h"
/**
 * fun_string - prints out the string
 * @head: front of stack
 * @counter: number index
 * Return: void
 */
void fun_string(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;

	while (h)
	{
		if (h->n > 127 || h->n <= 0)
			break;
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}


