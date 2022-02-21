#include "main.h"
#include <stdio.h>

/**
* main - function that takes a pointer and updates the value
* it oints to
* Return: Always 0.
*/

int main(void)
{
	int n;
	int *p;

	n = 402;
	p = &n;
	{
		printf("n = %d\n", n);
	}
	*p = 402;
	{
		printf("n=%d\n", n);
	}
	return (0);
}
