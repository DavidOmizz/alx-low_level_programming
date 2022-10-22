#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
		-putchar(A);

	_putchar('\n');
}
