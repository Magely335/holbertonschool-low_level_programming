#include <stdlib.h>
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
	int last_nun;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;

	if(last_num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5"\n)
	}
	if(last_num == 0)
	{
		printf("Last digit of %d is %d and is 0"\n)
	}
	if(last_num < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0"\n)
	}

	return (0);

}
