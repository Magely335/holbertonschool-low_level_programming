#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - Encodes string into 1337.
 *@s: string to encode
 *Return: pointer to encoded string
 */

char *leet(char *s)
{
	char *temp = s;
	char letter;

	while (*s)
	{
		letter = *s;
		if ((letter == 'a' || letter == 'A') ||
				(letter == 'e' || letter == 'E') ||
				(letter == 'o' || letter == 'O') ||
				(letter == 't' || letter == 'T') ||
				(letter == 'l' || letter == 'L'))
		{
			*s = '4' * (letter == 'a' ||
				letter == 'A') + '3' *
				(letter == 'e' ||
				 letter == 'E') + '0' *
				(letter == 'o' ||
				 letter == 'O') + '7' *
				(letter == 't' ||
				 letter == 'T') + '1' *
				(letter == 'l' ||
				 letter == 'L');
		}
		s++;
	}
	return (temp);
}
