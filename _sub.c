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

void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *delete = NULL;
	int sub = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		frees(*stack);
		exit(2);
	}

	sub = (*stack)->next->n - (*stack)->n;

	delete = *stack;
	*stack = (*stack)->next;

	(*stack)->n = sub;
	(*stack)->prev = NULL;

	delete->next = NULL;
	free(delete);
}
