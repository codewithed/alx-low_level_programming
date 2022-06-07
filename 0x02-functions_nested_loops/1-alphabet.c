#include "main.h"

/**
 * main - check the code
 * Return: Always 0
 */

/* declare function print_alphabet */
void print_alphabet(void);
/* prints inputted chars */
int _putchar(char c);


int main(void)
{
	void print_alphabet(void);
	return (0);
}


/**
 * print_alphabet - prints alphabet in lowercase
 * Returns: void
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

