#include "main.h"

/**
*print_line - Function that draws a straight line n times
*@n: number of times "_" is printed
*Return: void
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
