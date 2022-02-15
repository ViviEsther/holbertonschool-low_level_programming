#include "main.h"
#include <stdio.h>

/**
*_abs - Write a function that computes the absolute value of an integer
*@n: Input to calculate its abs
*Return: abs
*/

int _abs(int n)

{

	if (n >= 0)
		return (n);
	else
		return (n * -1);

}
