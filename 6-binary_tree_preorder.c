#include "binary_trees.h"

/**
 * binary_tree_preorder - go through a binary tree using preorder traversal
 * @tree : pointer to the tree
 * @func : pointer to a function
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		func;
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}

}
