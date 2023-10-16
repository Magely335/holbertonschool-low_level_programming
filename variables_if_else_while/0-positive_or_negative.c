#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 *
 * main - Entry point
 *
 * Return: 0;
 *
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("%d is Positive\n");
	}
	if (n == 0)
	{
		printf("%d is Zero\n");
	}
	if (n < 0)
	{
		printf("%d is Negative\n");
	}

	return (0);
}
