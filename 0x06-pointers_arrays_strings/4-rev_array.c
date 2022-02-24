#include "main.h"

/**
*reverse_array - check the code
*@a: an array of integers
*@n: the number of elements to swap
*
* Return: nothing.
*/

void reverse_array(int *a, int n)
{
	int i = 0, j = 0;

	n--;
	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
