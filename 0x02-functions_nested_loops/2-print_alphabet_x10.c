#include "main.h"

/**
* print_alphabet_x10 - function that prints 10 times the alphabet, in lowercase
*
* Return: Always 0
*/

void print_alphabet_x10(void)
{
	char i;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	_putchar('\n');

	}
}

