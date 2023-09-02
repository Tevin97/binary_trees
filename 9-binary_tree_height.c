#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: heigth or 0 if tree is Null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t t, m;

	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);
	t = binary_tree_height(tree->right);
	m = binary_tree_height(tree->left);
	if (m > t)
		t = m;
	return (t + 1);
}
