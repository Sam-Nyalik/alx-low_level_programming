#include "main.h"

/**
 *print_diagonal - Draws a diagonal line according to parameter
 *   
 *@n: The of time to print diagonal lines
 *
 *Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		putchar('\n');
	}
	else 
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				putchar(32);		
			}

			putchar(92);
			putchar('\n');
		}
	}
}
