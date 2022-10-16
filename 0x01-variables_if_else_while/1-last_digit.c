#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *  * main - Entry point
 *   * Return: Always 0 (Success)
 *    */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;
	if (lastNum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n);
	else if (lastNum  == 0)
		printf("Last digit of %d is %d and is 0\n", n);
	else 
		printf("Last digit oif %d is %d and is less than 6 and not 0\n", n);
	return (0);

}
