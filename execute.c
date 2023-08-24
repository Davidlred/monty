#include "monty.h"
/**
* runner - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int runner(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", fun_pusher}, {"pall", fun_pall}, {"pint", fun_pinteger},
				{"pop", fun_popper},
				{"swap", fun_change},
				{"add", fun_adder},
				{"nop", fun_nop},
				{"sub", fun_substitute},
				{"div", fun_divide},
				{"mul", fun_multiply},
				{"mod", fun_modulate},
				{"pchar", fun_putchar},
				{"pstr", fun_string},
				{"rotl", fun_rotl},
				{"rotr", fun_rotr},
				{"queue", fun_queue},
				{"stack", fun_stacker},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		clear_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

