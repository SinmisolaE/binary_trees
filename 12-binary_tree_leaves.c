#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in binary tree
 * @tree: pointer to the root node
 * Return: count else 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t loaves;


	if (!tree)
		return (0);
	loaves = (!(tree->left) && !(tree->right)) ? 1 : 0;
	loaves += binary_tree_leaves(tree->left);
	loaves += binary_tree_leaves(tree->right);
	return (loaves);
}
