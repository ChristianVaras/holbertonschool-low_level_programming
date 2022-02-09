#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers, starting with 1 and 2.
 * Return: 0
 */

int main(void)
{
	int counter;
	unsigned long a = 0, b = 1, sum;

	for (counter = 0; counter < 50; counter++)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (counter == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
