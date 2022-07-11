#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 * Description: alphabets
 * Return: 0 (success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
