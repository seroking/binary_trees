#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node in the right part
 *
 * @parent: the parent node
 * @value: value of the inserted node
 * Return: the inserted node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	}

	new_node->parent = parent;
	parent->right = new_node;

	return (new_node);
}
