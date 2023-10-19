#include "main.h"
#include <stdio.h>

/**
  *main - Entry point
  *
  * Return: void
  */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	
	putchar('\n');

}
