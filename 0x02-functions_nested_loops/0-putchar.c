#include <stdio.h>
#include "main.h"

/**
 * main - Start of program
 * Return: Always 0 (Success)
 */

void printword(void);
int main(void)
{
	printword();
	return (0);
}

/**
 * Return: Void
 */
/* Prints the word "_putchar"*/
int printword(void)
{
	int i;
	char c;
	
	for (i = 0; i < strlen(word); i++)
	{
		c = word[i];
		_putchar(c);
	}
	return (0);
}
