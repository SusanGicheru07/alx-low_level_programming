#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char num, letter;

	for (num = 0; num <= 9; num++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}


Task 3

#include "main.h"

/**
 * _islower - Checks for lowercase alphabet
 * @c: Character to be checked
 * Return: if character is lowercase, otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

