#include <stdio.h>

/**
 * main - Entry Point
 *
 * return: 0
 *
 */

int main(void)
{
	char alpha;
	alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);

		alpha--;
	}

	putchar ('\n');
	return (0);
}

