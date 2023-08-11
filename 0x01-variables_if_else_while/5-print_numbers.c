#include <stdio.h>
/**
 * main - Prints numbers of base ten
 *
 * Return:  Always (0)
 *
 */
int main(void)
{
	char base_ten = '0';

	while (base_ten <= '9')
	{
		putchar(base_ten);
		base_ten++;
	}
	putchar('\n');
	return (0);
}
