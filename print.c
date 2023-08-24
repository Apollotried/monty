#include "monty.h"

/**
 * print - print data
 * @stack: stack pointer
 * @lineNumber: nb of lines
 * Return: void
 */

void print(stack_t **stack, unsigned int __attribute__((unused)) lineNumber)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: cant print\n", lineNumber);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
