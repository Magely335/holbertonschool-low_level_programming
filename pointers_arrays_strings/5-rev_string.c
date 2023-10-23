#include "main.h"
#include <stdio.h>

/**
 * rev_string - to reverse a string
 * @s: pointer
 *
 */

void rev_string(char *s)
{
	int i, j;
	char c;

	for (i = 0; j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
