#include "binary_trees.h"


/**
 * heap_extract - Extracts the root node of a Max Binary Heap.
 *
 * @root: A double pointer to the root node of heap.
 *
 * Return: The value stored in the root node.
 */
int heap_extract(heap_t **root)
{
	int value;

	if (!*root)
		return (0);
	value = (*root)->n;
	if (!(*root)->left)
	{
		value = (*root)->n;
		free(*root);
		*root = NULL;
		return (value);
	}
	recurse_extract(*root);
	return (value);
}
