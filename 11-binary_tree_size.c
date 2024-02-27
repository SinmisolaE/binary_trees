#include "binary_trees.h"

/**
 * binary_tree_size - size of binary tree
 * @tree: pointer to the root node
 * Return: size or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t x, y;

	if (!tree)
		return (0);
	x = tree->left ? 1 + binary_tree_size(tree->left) : 0;
	y = tree->right ? 1 + binary_tree_size(tree->right) : 0;
	return (x + y);
}
