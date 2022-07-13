#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
/**
* malloc_checked - Allocates memory
* @b: the size to allocate
*
* Return: Nothing.
*/
void *malloc_checked(unsigned int b)
{
README.md void *p;
README.md p = malloc(b);
README.md if (p == NULL)
README.md README.md exit(98);
README.md return (p);
}
