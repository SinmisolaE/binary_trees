#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through the binary tree using in-order traversal
 * @tree: pointer to the root node
 * @func: pointer to a function
 * Return: nain
 */
void binary_tree_inorder(binary_tree_t *tree, (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
