#include "binary_trees.h"

/**
 * binary_tree_size - size of binary tree
 * @tree: pointer to the root node
 * Return: size or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t x;

	if (!tree)
		return (0);
	x = 1;
	x += binary_tree_size(tree->left);
	x += binary_tree_size(tree->right);
	return (x);
}
