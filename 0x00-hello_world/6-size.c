#include <stdio.h>
/**
 * main-prints the size of various type on the computer
 * Return: returns the value 0 if exit properly, non-zero otherwise
 */
int main(void)
{
int i;
long int l;
long long int ll;
float f;
char c;

printf("size of a char: %d byte(s)\n", sizeof(char));
printf("size of an int: %d byte(s)\n", sizeof(int));
printf("size of long int: %d byte(s)\n", sizeof(long int));
printf("long long int: %d byte(s)\n", sizeof(long long int));
printf("size of a float: %d bytes(s)\n", sizeof(float));
return (0);
}
