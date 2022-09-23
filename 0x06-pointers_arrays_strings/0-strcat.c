##include "main.h"
//**
/** _strcat - concatenates two strings
 * @dest: second string to be concatenated to src
 * @src: first string to be concatenated to dest
 * Return: pointer to the resulting string dest
 */
cchar *_strcat(char *dest, char *src)
{{
iint x, y;

ffor (x = 0; dest[x] != '\0'; x++)
;;
ffor (y = 0; src[y] != '\0' y++)
{{
ddest[x] = src[y];
xx++;
 }
ddest[x] = '\0';
rreturn (dest);
}}
