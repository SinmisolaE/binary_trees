#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of node in binary tree
 * @tree: pointer to the node
 * Return: depth of node or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t x;

	if (!tree)
		return (0);
	x = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (x);
}
