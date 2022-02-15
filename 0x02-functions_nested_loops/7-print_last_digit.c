#include "main.h"

/**
* print_last_digit - function that prints the last digit of a number
* @n: determine last digit os a number
* Return: last digit
*/

int print_last_digit(int n)
{

	if (n < 0)
		return ((n * (-1)) % 10);
	_putchar(n % 10);
	return (n % 10);
}
