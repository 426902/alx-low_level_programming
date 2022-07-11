#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- entry point
 * description:numbers
 * Return: 0 (success)
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
