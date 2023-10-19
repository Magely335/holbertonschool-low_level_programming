#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - will print the alphabet in lowercase 10 times.
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar (alpha + '0');
	}

	putchar ('\n');
}
