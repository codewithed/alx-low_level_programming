#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
 *main - returns a string
 */
int main(void)

{

	int n;
	int last_digit = n[-1];


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5 \n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0 \n", n, last_digit);
	if (last_digit > 5)
		printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, last_digit);
        return (0);
}
