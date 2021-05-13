#include "monty.h"

/**
 *
 *
 *
 *
 *
 *
 *
 */

void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *delete = NULL;
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		frees(*stack);
		exit(2);
	}

	sum = (*stack)->n + (*stack)->next->n;

	delete = *stack;
	*stack = (*stack)->next;

	(*stack)->n = sum;
	(*stack)->prev = NULL;

	delete->next = NULL;
	free(delete);
}
