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

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *list = *stack;
	(void) line_number;

	while (list)
	{
		printf("%d\n", list->n);
		list = list->next;
	}
}
