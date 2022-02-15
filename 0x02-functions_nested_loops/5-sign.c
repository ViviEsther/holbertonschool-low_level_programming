#include "main.h"

/**
* print_sign - Write a function that checks for lowercase character
* Returns 1 and prints + if n is greater than zero
* Returns 0 and prints 0 if n is zero
* Returns -1 and prints - if n is less than zero
* @n integrer to check
*/

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}