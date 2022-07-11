#include <stdio.h>
/**
 * main-prints the size of various type on the computer
 * Return: returns the value 0
 */
int main(void)
{
int i;
long int l;
long long int ll;
float f;
char c;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
