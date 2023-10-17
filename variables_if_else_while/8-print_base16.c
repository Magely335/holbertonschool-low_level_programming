#include <stdio.h>

/**
 *main - Entry Point
 *
 * Return: (0)
 *
 */

int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
	{
		while (num + 15)
		{
			printf ("%x", num);
		}
	}

	printf ('\n');
	return (0);
}
