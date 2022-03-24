#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return - dest
 */
char *_strcat(char *dest, char *str)
{
	int x = 0;
	int y = 0;

	while (dest[x] != 0)
		x++;

	while (src[y] != 0) {
		dest[x] = src[y];
		x++;
		y++;
	}

	return (dest);
}
