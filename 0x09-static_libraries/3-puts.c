#include "main.h"
/**
 * _puts - print out string to the stdout
 * @str: argument to the function
 * Description: return the required result
 * return void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
