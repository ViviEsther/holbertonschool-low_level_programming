#include "main.h"

/**
*_strcat - Function that concatenates two strings
*@src: input parameter
*@dest: input parameter
*Return: Strings dest and src appended
*/

char *_strcat(char *dest, char *src)
{

	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (s);
}
