#include <stdio.h>
/**
 * main- entry point
 * Return: 0 (success)
 */
int main(void)
{
	int sum, i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
