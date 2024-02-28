#include "binary_trees.h"

int recursive_full(const binary_tree_t *tree);

/**
 * binary_tree_is_full - checks if binary is full
 * @tree: pointer to the root node
 * Return: 1 if full, else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (recursive_full(tree));
}

/**
 * recursive_full - checks if the binary is full
 * @tree: pointer to the root node
 * Return: 1 if true, else 0
 */
int recursive_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if ((!tree->left && tree->right) || (!tree->right && tree->left))
		return (0);
	return (recursive_full(tree->left) && recursive_full(tree->right));
}
