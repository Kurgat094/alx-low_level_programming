/*
 * File: 2-print_alphabet.c
 * Auth: Tobias Kurgat
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: it returns zero .
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
