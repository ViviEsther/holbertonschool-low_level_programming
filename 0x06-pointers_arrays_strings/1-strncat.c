#include "main.h"

/**
*_strncat - Function that concatenates two strings
*Returnings a pointer to the resulting string
*@dest: input parameter
*@src: input parameter
*Return: s
*/

char *_strncat(char *dest, char *src, int n)
{

	char *s = dest;
	int i = 0;

		while (*dest != '\0')
		{
			dest++;
		}
		while (*src != '\0' && i < n)
		{
			*dest = *src;
			dest++;
			src++;
			i++;
		}
		return (s);
}
