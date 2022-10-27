#include "main.h"

/**
 * _strncat -  concatenate two strings.
 * @src: source
 * @dest: destination.
 * @n: number.
 * Return: concatenated.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++;
	}
	dest[index + a] = '\0';
	return (dest);
}
