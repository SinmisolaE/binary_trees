#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node
 * Return: the height else 0
 */
size_t binary_tree_height(binary_tree_t *tree)
{
	size_t x, y = 0;

	if (!tree)
		return (0);

	x = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	y = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (x > y ? x : y);
}
