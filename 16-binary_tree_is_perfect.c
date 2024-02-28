#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary is perfect
 * @tree: pointer to the root node
 * Return: 1 if true, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int x, y;

	if (!tree)
		return (0);
	x = tree->left ? 1 + binary_tree_is_perfect(tree->left) : 0;
	y = tree->right ? 1 + binary_tree_is_perfect(tree->right) : 0;
	return (x - y == 0 ? 1 : 0);
}
