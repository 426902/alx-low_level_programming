#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 * Description: Alphabets
 * Return: 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putcahr(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
