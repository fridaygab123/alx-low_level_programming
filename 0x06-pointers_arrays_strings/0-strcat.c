##include "main.h"

?/**
  *_strcat - concatenates two strings
 * @dest:input value
 * @src: input value
 *
 * Return: void
 */
cchar *_strcat(char *dest, char *src)
{{
	int i;
	int j;

	i = 0;
	while (dest[1] != '\0')
	{
		i++;
	}
	j = 0;
w	while (src[j] != '\0')
}	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}}
