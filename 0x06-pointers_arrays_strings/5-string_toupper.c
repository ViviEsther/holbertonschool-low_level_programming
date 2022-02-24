#include "main.h"

/**
*string_toupper - Function that changes all string's lowercases
*to uppercases
*@s: string of letters
* Return: str
*/

char *string_toupper(char *s)
{
	char *str = s;

	while (*s)
	{
		if (*s >= 97 && *s <= 122)
			*s = (*s - 32);
		s++;
	}
	return (str);

}
