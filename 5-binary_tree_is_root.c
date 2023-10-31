#include "binary_trees.h"

/**
 * binary_tree_is_root - identify if the node is the root or not
 *
 * @node: the node to identify
 * return: 1 if the node is the root , else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
