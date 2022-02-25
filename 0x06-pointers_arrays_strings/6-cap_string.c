#include "main.h"

/**
*cap_string - Function that capitalizes all words of a string
*@s: string of letters
*Return: s
*/

char *cap_string(char *s)
{
	char *str = s;
	char del[14] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};
	int count;
	int i = 0;

	while (*(s + i))
	{
		if (i == 0 && *(s + i) >= 97 && *(s + i) <= 122)
			*(s + i) = *(s + i) -32;
		count = 0;
		while (*(del + count))
		{
			if (*s == *(del + count))
			{
				if (*(s + 1) >= 97 && *(s + 1) <= 122)
				*(s + 1) = *(s + 1) - 32;
			}
			count++;
		}
		s = s + 1;
		i++;
	}
	return (str);
}
