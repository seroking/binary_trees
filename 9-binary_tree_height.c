#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 *
 * @tree: pointer to the binary tree
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0, height;

	if (tree == NULL)
		return (0);

	left_height = 1 + binary_tree_height(tree->left);
	right_height = 1 + binary_tree_height(tree->right);

	if (!tree->left && !tree->right)
		return (0);

	if (left_height > right_height)
		height = left_height;
	if (right_height < left_height)
		height = right_height;

	return (height);
}
