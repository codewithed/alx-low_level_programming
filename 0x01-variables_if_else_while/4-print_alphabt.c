#include <stdio.h>
#include <stdlib.h>

/**
 *main - starts here
 *returns the alphabet in lowercase
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
			i++;
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
