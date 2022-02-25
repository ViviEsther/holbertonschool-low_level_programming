#include "main.h"

/**
*leet - Function that encodes a string into 1337
*@s: string to be encoded
*Return: string
*/

char *leet(char *s)
{
	int i = 0;
	int j;
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char str[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
			if (s[i] == str[j])
				s[i] = num[j];

		i++;
	}

	return (s);
}
