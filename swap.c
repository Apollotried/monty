#include "monty.h"

/**
 * swap - swaps 2 values of thr top
 * @stack: stack pointer
 * @lineNumber: ln of instruction
 * Return: void
 */

void swap(stack_t **stack, unsigned int lineNumber)
{
	int t;

	if (len(stack) < 2)
	{
		fprintf(stderr, "L%d: cantt swap\n", lineNumber);
		exit(EXIT_FAILURE);
	}

	t = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = t;
}
