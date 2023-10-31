#include "binary_trees.h"
/**
 * binary_tree_is_leaf - identify a leaf
 *
 * @node : the node to identify as a leaf or not
 * Return: 1 if it's a leaf , 0 if it's not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}
	return (0);

}
