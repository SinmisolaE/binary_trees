#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of binary tree
 * @tree: pointer to the root node
 * Return: the measure else 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int x;
	int y;

	if (!tree)
		return (0);
	x = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	y = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (x - y);
}
/*
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t
	if (!tree)
		return (0);
	x = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	y = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (x > y ? x : y);
}*/
