#include <stdio.h>

/**
 * main - print sum of even Fionacci sequence up to 4,000,000
 * Return: 0
 */

int main(void)
{
	int a;
	int b;
	int sum = 1;
	int sum_of_pairs = 0;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			sum_of_pairs += sum;
	}
	printf("%d\n", sum_of_pairs);

	return (0);
}