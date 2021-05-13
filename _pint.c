#include "monty.h"

/**
 * _pint - This function prints the value at the top of the stack.
 *
 * @stack: Double pointer to the head of the Stack.
 *
 * @line_number: line number.
 *
 * Return: nothing.
 *
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	printf("%d\n", (*stack)->n);
}
