#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: the string to be searched through
 * @needle: the substring to search for its first occurence
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}
		if (needle[b] == '\0')
		{
			return (&haystack[a]);
		}
	}

	return (NULL);
}
