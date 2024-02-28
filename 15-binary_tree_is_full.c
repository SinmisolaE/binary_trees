#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary is full
 * @tree: pointer to the root node
 * Return: 1 if full, else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((!(tree->left) && tree->right) || (!(tree->right) && tree->left))
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);
	return (1);
}
