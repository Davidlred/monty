#include "monty.h"
/**
 * fun_pinteger - prints top
 * @head: front of stack
 * @counter: line counter
 * Return: void
 */

void fun_pinteger(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't print, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("&d\n", (*head)->n);
}

