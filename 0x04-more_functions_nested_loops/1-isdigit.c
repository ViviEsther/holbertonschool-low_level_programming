#include "main.h"
#include <stdio.h>

/**
* _isdigit - function that checks for a digit
* @c: Is a digit
* Return: Always 0.
*/

int _isdigit(int c)
{

	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
