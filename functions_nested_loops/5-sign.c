#include "main.h"
#include <stdio.h>

/**
 * @n: checks value
 * print_sign - Enry point
 *
 * Return: 1 if greater than zero, 0 if zero and -1 if less than zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf ("+%d\n", print_sign(n));
		return (1);
	}
	else if (n == 0)
	{
		printf ("0");
		return (0);
	}
	else
	{
		printf ("-");
		return (-1);
	}
}
