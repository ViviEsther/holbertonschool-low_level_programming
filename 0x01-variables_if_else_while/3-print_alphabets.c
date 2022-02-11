#include <stdio.h>

/**
* main - Write a program that prints the alphabet in lowercase.
*
* Return: Always 0
*/

int main(void)
{
	char ch;

		for (ch = 'a' ; ch <= 'z' ; ch++)
			putchar(ch);
		for (ch = 'A' ; ch <= 'Z' ; ch++)
			putchar(ch);	
		printf("\n");

		return (0);
}
