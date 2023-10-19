#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - will print the alphabet in lowercase 10 times.
 *
 * Return: void
 *
 */

void print_alphabet_x10(void) {
    for (int i = 0; i < 10; i++) {
        for (char c = 'a'; c <= 'z'; c++) {
            putchar(c);
        }
        putchar('\n');
    }
}
