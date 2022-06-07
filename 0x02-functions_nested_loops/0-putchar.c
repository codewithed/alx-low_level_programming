#include <stdio.h>
#include "main.h"

/**
 * main - prints '-putchar'
 * Return: Always 0 (Success)
 */

void printword(void);
int main(void)
{
	printword();
	return (0);
}

/**
 * printword prints "_putchar" and a new line
 * Return: Void
 */
/* Prints the word "_putchar"*/
int printword(void)
{
	int i;
	char c;
	
	for ( i = 0; i < strlen(word); i++)
	{
		c = word[i];
		_putchar(c);
	}
	return (0);
}
