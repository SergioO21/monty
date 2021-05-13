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

void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *delete = NULL;
	int mul = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		frees(*stack);
		exit(2);
	}

	mul = (*stack)->next->n * (*stack)->n;

	delete = *stack;
	*stack = (*stack)->next;

	(*stack)->n = mul;
	(*stack)->prev = NULL;

	delete->next = NULL;
	free(delete);
}
