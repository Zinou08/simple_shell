#include "shell.h"

/**
 * bfree - frees pointer and NULLS address
 * @ptr: Address of the pointer to free
 *
 * Return: 1 if freed or otherwise 0.
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
