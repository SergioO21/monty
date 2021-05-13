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

void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *delete = NULL;
	int div = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		frees(*stack);
		exit(2);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		frees(*stack);
		exit(2);
	}

	div = (*stack)->next->n / (*stack)->n;

	delete = *stack;
	*stack = (*stack)->next;

	(*stack)->n = div;
	(*stack)->prev = NULL;

	delete->next = NULL;
	free(delete);
}
