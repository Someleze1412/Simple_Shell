#include "shell.h"

/**
 * bfree - frees a pointers and NULLs the address
 * @ptr: address of the pointers to free
 *
 * Return: 1 if free, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}


