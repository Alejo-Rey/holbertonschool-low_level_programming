#include "holberton.h"

/**
 * _realloc - poasdfl
 * @ptr: asdf
 * @old_size: skjnasdvl
 * new_size: lksfpadi
 * Return: kjhasd  wf s
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;

	ptr1 = malloc(sizeof(int) * old_size + new_size);
	if (ptr1 == NULL)
		return (NULL);
	if (new_size > old_size)
		free(ptr1);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr1);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	return (ptr1);
}
