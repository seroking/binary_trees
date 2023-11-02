#include "binary_trees.h"

/*
 * binary_tree_size - measure the size of the binary tree
 *
 * @tree: pointer to tree
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t left = binary_tree_size(tree->left);
	size_t right = binary_tree_size(tree->right);

	if (!tree->left && !tree->right)
		return (1)

	return (left + right + 1);
}
