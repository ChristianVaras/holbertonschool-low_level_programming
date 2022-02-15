#include "main.h"

/**
 * puts_half - Prints second half of a string
 * @str: String which second half will be printed
 */

void puts_half(char *str)
{
	int index;
	int len;
	int half;

	len = 0;

	/* return the length of a string */

	while (*(str + len) != '\0')
		len++;

	half = len / 2;

	/* find the index to start depending on even/odd amount of len */
	if (len % 2 != 0)
		half++;

	for (index = half; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
