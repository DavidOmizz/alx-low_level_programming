#include "main.h"

/**
 * _islower - Entry point
 * @c: the char
 * Return: 1 if it is lower, 0 if else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
