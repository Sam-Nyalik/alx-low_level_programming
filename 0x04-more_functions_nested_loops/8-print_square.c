#include "main.h"

/**
 *print_square - Prints n square according n number of times
 *   
 *@size: The number of squares/number of times
 *     
 *Return: void
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		putchar('\n');
	}
	else 
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				putchar(35);
			}

			putchar('\n');
		}
	}
}
