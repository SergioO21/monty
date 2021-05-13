#include "monty.h"

/**
 * _swap - This function swaps the top two elements of the stack.
 *
 * @stack: Double pointer to the head of the Stack.
 * @line_number: line number.
 *
 * Return: Nothing.
 *
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	int swaper;
	(void) line_number;

	swaper = (*stack)->next->n;

	(*stack)->next->n = (*stack)->n;
	(*stack)->n = swaper;
}
