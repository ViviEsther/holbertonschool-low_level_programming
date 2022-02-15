#include "main.h"

/**
* print_sign - function that checks the sign of a number
* Return: 0 if n is zero, 1 if n is psitive otherwisw -
* @n: input number to calculate its sign
*/

int print_sign(int n)

	{		

		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
