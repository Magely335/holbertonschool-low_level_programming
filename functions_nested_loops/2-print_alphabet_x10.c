#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - will print the alphabet in lowercase 10 times.
 *
 * Return: 0.
 *
 */

void print_alphabet_x10(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		for (alpha = 0; alpha <= 10; alpha++)
		{
			putchar (alpha);
		}
	}

	putchar ('\n');
	return (0);
}
