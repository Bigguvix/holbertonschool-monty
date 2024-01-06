#include "monty.h"

/**
 * pall - prints data
 *
 * @st: pointer to stack
 * @newl: number of the line
 *
 * Return: Nothing.
 */
void pall(stack_t **st, unsigned int newl)
{
	stack_t *temp = *st;

	newl += 0;
	if (temp == NULL)
	{
		printf("0\n");
	}
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
