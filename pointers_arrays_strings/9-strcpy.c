#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
  int i;
  
  while(src[i])
  {
    dest[i] = src[i];
    i++;
  }
  *dest = '\0';
  return (dest);
}