#include "main.h"
/**
 * _strlen - retun the length of the string
 * @s: argument to the function
 * Description: return the required results
 * Return: integer value
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count += 1;
		s++;
	}
	return (count);
}
