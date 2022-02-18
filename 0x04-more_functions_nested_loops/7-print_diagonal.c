#include "main.h"

/**
*print_diagonal - Function that diagonal line on the terminal
*@n: number of times "_" is printed
*Return: void
*/

void print_diagonal(int n)
{
	int i = 1;

	while (i < n)
	{
		int j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
		
}
