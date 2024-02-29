#include "binary_trees.h"

size_t recursive_full(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if a binary is perfect
 * @tree: pointer to the root node
 * Return: 1 if true, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (recursive_full(tree));
}

/**
 * binary_tree_height - height of the binary tree
 * @tree: pointer to the root node
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x, y;
	if (!tree)
		return (0);
	x = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	y = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (x > y ? x : y);
}

size_t recursive_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	return (recursive_full(tree->left) && recursive_full(tree->right)
			&& (binary_tree_height(tree->left) == binary_tree_height(tree->right)));
}
