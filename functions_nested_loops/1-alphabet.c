#include "main.h"

/**
 * main - Entry Point
 *
 * Return: 0
 *
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'y'; alpha++)
	{
		putchar (alpha);
	}

	putchar ('z');
	putchar ('\n');

	return (0);
}
