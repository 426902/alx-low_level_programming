#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- print possible combination of digit
 * Description: write 0-9 seperate with comma followed by space
 * Return: 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');

		}
		num++;
	}
	putchar('\n');
	return (0);
}
