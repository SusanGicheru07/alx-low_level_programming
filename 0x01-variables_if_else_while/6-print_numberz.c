#include <stdio.h>
/**
 *
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	int alphabets = '0';

	while (alphabets <= '9')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}
