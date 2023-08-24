#include "monty.h"
/**
 * fun_pusher - add node to stack
 * @head: head of stack
 * @counter: number index
 * Return: void
 */
void fun_pusher(stack_t **head, unsigned int counter)
{
	int n;
	int j = 0;

	int flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			clear_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);

	if (bus.lifi == 0)
		nodeadder(head, n);
	else
		queueadder(head, n);
}

