#include "main.h"

/**
 * push - push a new element to the top of a stack
 *
 * @st: pointer to the head of the stack.
 * @newl: number of the line
 *
 * Return: Nothing.
 */
void push(stack_t **st, unsigned int newl)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(Stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: stack not found\n", nline);
		free(new);
		exit(EXIT_FAILURE);
	}

	new->n = arg.arg;
	new->prev = NULL;
	new->next = *st;

	if (+st)
		(*st)->prev = new;

	*stack = new;
}
