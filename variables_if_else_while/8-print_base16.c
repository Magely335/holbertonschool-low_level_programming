#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: (0)
 *
 */

int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
	{
		putchar ('%x', num);
	}
	
	putchar ('\n');
	return (0);
}
