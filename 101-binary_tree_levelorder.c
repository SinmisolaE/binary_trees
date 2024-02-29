#include "binary_trees.h"

void binary_levelorder_cont(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_levelorder - gors through the binary using level order traversal
 * @tree: pointer to thr binary tree
 * @func: function on tree
 * Return: nain
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_levelorder_cont(tree, func);
}

/**
 * binary_levelorder_cont - goes through using level order traversal
 * @tree: pointer to the binary tree
 * @func: function on tree
 * Return: nain
 */
void binary_levelorder_cont(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left)
		func(tree->left->n);
	if (tree->right)
		func(tree->right->n);
	if (tree->left)
		binary_levelorder_cont(tree->left, func);
	if (tree->right)
		binary_levelorder_cont(tree->right, func);
}
