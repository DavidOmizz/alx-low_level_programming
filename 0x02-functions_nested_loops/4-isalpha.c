#include "main.h"

/**
 * _isalpha - Checks alphabets
 * @c: cheked
 * Return: 1 if character is letter, 0 for otherwise
 */
int _isalpha(int c)
{
	if ((ch >= 'a' && c <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);
}
