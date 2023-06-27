#include "main.h"
#include <string.h>
/**
 * _strcpy - to copy s string by src to the
 * buffer pointed by dest
 * @dest: pointer to the string copied from src
 * @src:pointer to the srting to be copied
 * Return:pointer to the string copied
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
