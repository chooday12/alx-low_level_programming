#include "main.h"

/**
 * print_alphabet_x10 - prints alpha ten times
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; num <= 9; ten++)
	{

		for (la = 'a'; la <= 'f'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
