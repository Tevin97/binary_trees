#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the parent node of the node to create
 * @value:Value to put in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is
 * NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
