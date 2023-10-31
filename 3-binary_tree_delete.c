#include "binary_trees.h"

/**
 * binary_tree_delete - delete the binary tree
 *
 * @tree: the tree
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);

	free(tree);
}
