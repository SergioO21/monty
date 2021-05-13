#ifndef _MONTY_H_
#define _MONTY_H_
#define LIMITERS " ,!?\'\"\t\n\r"
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/** Extern Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/** Global Variable */
int n;

/** Prototypes */
void token_error(stack_t *stack, unsigned int number, FILE *file, char *tok);
void is_number(stack_t *stack, unsigned int lnumber, char *token, FILE *mfile);
void handle1(stack_t **stack, unsigned int line_number, FILE *m_file, int i);
int handle2(stack_t **stack, unsigned int line_number, int i);
int handle3(stack_t **stack, unsigned int line_number, int i);
int handle4(stack_t **stack, unsigned int line_number, int i);
void parse_execute(FILE *monty_file, instruction_t instructions[]);
void _pall(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _push(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void _mul(stack_t **stack, unsigned int line_number);
void _mod(stack_t **stack, unsigned int line_number);
void _pchar(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _pstr(stack_t **stack, unsigned int line_number);
void frees(stack_t *stack);

#endif /* Monty Library */
