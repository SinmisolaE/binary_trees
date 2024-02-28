#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary is perfect
 * @tree: pointer to the root node
 * Return: 1 if true, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int x, y, full;

	if (!tree)
		return (0);
	full = recursive_full(tree);
	x = binary_tree_height(tree->left);
	y = binary_tree_height(tree->right);
	if ((full == 1) && (x - y == 0))
		return (1);
	return (0);
}

/**
 * binary_tree_height - height of the binary tree
 * @tree: pointer to the root node
 * Return: the height
 */
size_t binary_tree_height(binary_tree_t *tree)
{
	
}
