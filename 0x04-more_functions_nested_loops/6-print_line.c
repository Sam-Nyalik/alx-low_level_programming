#include "main.h"

/**
 *print_line - Draws a straight line on the terminal
 *
 *@n: Number of time sthe character '_' should printed
 *
 *Return: empty
 */

void print_line(int n)
{
	int i;
	if(n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for(i = 0; i < n; i++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
