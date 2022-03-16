#include "main.h"
/**
 * print_alphabet_×10 -Print alphabet 10 times
 *
 * Rwturn: void
 */
void print_alphabet_x10(void)
{
	int round = 0;
	char letter = 'a';

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		round++;
	}
}
