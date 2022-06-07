#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x in lowercase
 *
 * Returns: Void
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char y;

	for (i = 0; i < 10; i++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
      
