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

void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *list = *stack;

	if (!list)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		frees(*stack);
		exit(2);
	}

	printf("%d\n", list->n);
}
