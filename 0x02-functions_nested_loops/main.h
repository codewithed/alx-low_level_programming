/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
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
