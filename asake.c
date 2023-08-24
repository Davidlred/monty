#include "monty.h"
/**
 * fun_queue - prints out a queue front
 * @head: head of stack
 * @counter: number index
 * Return: void
 */
void fun_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * queueadder - add to end of queue
 * @n: new_value
 * @head: stack head
 * Return: void
 */
void queueadder(stack_t **head, int n)
{
	stack_t *new_node;
	stack_t *aux;

	aux = *head;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		printf("Error\n");
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}


