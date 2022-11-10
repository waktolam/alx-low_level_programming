#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenate string1 and n bytes of string2; 
 * return ptr to string
 * @string1: string 1
 * @string2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *string1, char *string2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;

	if (string1 == NULL) /* account for NULL strings */
		string1 = "";
	if (string2 == NULL)
		string2 = "";
	if (num < 0) /* account for negative n bytes */
		return (NULL);
	if (num >= _strlen(string2)) /* account for n too big */
		num = _strlen(string2);

	len = _strlen(string1) + num + 1; /* +1 to account for null pointer */

	ptr = malloc(sizeof(*ptr) * len); /* malloc and check for error */
	if (ptr == NULL)
		return (NULL);

	for (i = 0; string1[i] != '\0'; i++) /* concat */
		ptr[i] = string1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = string2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
