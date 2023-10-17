#include <stdio.h>

/**
 *main - Entry Point
 *
 * Return: (0)
 *
 */

int main(void)
{
	for (char num = '0'; num <= '9'; num++)
	{
		putchar (num);
	}

	for (char num = 'a'; num <= 'f'; num++)
	{
		putchar (num);
	}
	
	putchar ('\n');
	return (0);
}
