#include <stdlid.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: o;
 *
 */

/* betty style doc for function main goes there*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_number = n % 10;

	if(n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5"\n)
	}
	if(n == 0)
	{
		printf("Last digit of %d is %d and is 0"\n)
	}
	if(n < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0"\n)
	}

	return (0);

}
