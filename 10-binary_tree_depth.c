#include "binary_trees.h"

/**
 * binary_tree_depth - dept of the tree
 *
 * @tree : pointer to the tree
 *
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	return 0;
}
