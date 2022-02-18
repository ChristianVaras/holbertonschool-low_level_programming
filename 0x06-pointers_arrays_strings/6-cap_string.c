#include "main.h"

/**
 * cap_string - capitalize first letter of each word
 * @s: string to manipulate
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;
	int i_sep = 0;
	char separator[13] = {9, 10, 32, 33, 34, 40, 41, 44,
			      46, 59, 63, 123, 125};

	/* check first index for capital */
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
	i++;

	while (s[i] != '\0') /* iterate through string */
	{
		for (i_sep = 0; i_sep < 13; i_sep++)

		/* if lowercase and prior char is separator, capitalize*/
		if ((s[i] >= 'a' && s[i] <= 'z') &&
		    (s[i - 1] == separator[i_sep]))
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}
