#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len, t;

	len = 0;

	while (scr[len] != '\0')
	{
		len++;
	}

	for (t = 0; t < len; t++)
	{
		dest[t] = scr[t];
	}

	dest[t] = '\0';

	return (dest);
}

