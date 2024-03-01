#include "binary_trees.h"

/**
 * binary_tree_insert_left - Adds node to the left of a given node
 * in a binary tree
 * @parent: A pointer to the node to where the left-child will be inserted
 * @value: The value stored in the new node.
 *
 * Return:NULL  If parent is NULL or an error occur
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
