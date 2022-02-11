#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Write a program that prints the alphabet in lowercase.
*
* Return: Always 0
*/

int main(void)
{
	char ch;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
		printf("\n");

	return (0);
}
