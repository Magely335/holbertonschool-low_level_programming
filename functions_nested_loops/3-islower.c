#include "main.h"

/**
 * _islower - checks if a character is a lowercase.
 * @c: value to check
 *
 * Return: 1 if is lowercase, 0 otherwise.
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
