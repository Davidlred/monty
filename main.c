#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
bus_t bus = {NULL, NULL, NULL, 0};
/**
 * main - monty code interpreter
 * @argc: argument
 * @argv: monty file location
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{

	char *content = NULL;
	FILE *file;
	char *read_line;
	stack_t *stack = NULL;

	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((read_line = fgets(content, sizeof(char) * 1024, file)) != NULL)
	{
		bus.content = content;
		counter++;
		runner(content, &stack, counter, file);
		free(content);
	}

	clear_stack(stack);
	fclose(file);
	return (0);
}

