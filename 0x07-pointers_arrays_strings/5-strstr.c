nclude "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located.
 * Return: If the substring is located - a lointer to the beginning
 * of the located substring
 * If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
