#include "binary_trees.h"

/**
 * binary_tree_postorder - go through a binary tree using postorder traversal
 * @tree : pointer to the tree
 * @func : pointer to a function
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
