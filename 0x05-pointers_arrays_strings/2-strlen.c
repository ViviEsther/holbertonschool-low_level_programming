#include "main.h"

/**
*_strlen - Function that returns the length of a string
*@*s: input parameter for the string
*Return: void
*/

int _strlen(char *s)
{

	int i = 0;

	while (s[i] != '\0');
	i++;

	return (i);

}
