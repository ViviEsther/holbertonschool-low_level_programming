#include "main.h"

/**
*string_toupper - Function that changes all string's lowercases
*to uppercases
*@s: string of letters
* Return: Always 0.
*/

char *string_toupper(char *)
{
	char *s;

	while (*s)
	{
		(*s >= 97 && *s <= 122)
		*s = (s - 32);
			s++;
	}
	return (0);

}
