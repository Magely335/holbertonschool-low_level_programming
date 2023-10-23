#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: num 1
 * @b: num 2
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
		*a = *b;
			*b = c;
}
