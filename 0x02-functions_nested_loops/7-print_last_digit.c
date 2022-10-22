#include "main.h"

/**
 * print_last_digit - prints lasts digit of number
 * @n: determine the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int b;

	if (n < 0)
		n = -n;

	b = n % 10;

	if (b < 0)
		b = -b;

	_putchar(b + '0');

	return (b);
}

