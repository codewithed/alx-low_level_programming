#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * main - Start of program
 * Return: Always 0 (Success)
 */

int printword(void);
int main(void)
{
	printword();
	return (0);
}

/**
 * printword - prints the characters of a string 'word'
 * Return: Void
 */
/* Prints the word "_putchar"*/
int printword(void)
{
	int i;
	char c;
	int len = strlen(word);

	for (i = 0; i < len; i++)
	{
		c = word[i];
		_putchar(c);
	}
	return (0);
}
