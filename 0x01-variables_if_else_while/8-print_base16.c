#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- entry point
 * Description: alphabets
 * Return: 0 (success)
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		puchar(num);
		num++;
	}
	num = 'a';

	while (num <= 'f')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
