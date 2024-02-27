#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with atleast 1 child in binary tree
 * @tree: pointer to the root node
 * Return: count else 0
 */
binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	nodes = 0;
	if (!tree)
		return (0);
	nodes += (!(tree->left) || !(tree->right)) ? 1 : 0;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
