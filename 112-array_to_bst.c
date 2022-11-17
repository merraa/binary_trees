#include "binary_trees.h"
/**
 * array_to_bst - Builds a Binary Search Tree from an array
 * @array: The array that will be converted to BST
 * @size: size of the array
 * Return: Pointer to the root node of the created BST, or NULL on failure
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *tree_node = NULL;

	/* if array isn't present*/
	if (array == NULL)
		return (NULL);

	/* iterates through the array and inserts values into the tree */
	while (i < size)
	{
		bst_insert(&tree_node, array[i]);
		i++;
	}
	return (tree_node);
}
