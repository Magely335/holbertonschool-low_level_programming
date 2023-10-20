#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of a integer.
 *@n: The integer to be computed.
 *
 * Return: The absoute value of the integer.
 *
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

