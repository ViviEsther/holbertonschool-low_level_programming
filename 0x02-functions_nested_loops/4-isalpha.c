#include "main.h"

/**
* _islower - Write a function that checks for alphabetic character
* @c: is a character
* Return: 1 if c is letter, lowercase or uppercase
*/

int _islower(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
