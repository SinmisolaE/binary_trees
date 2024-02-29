#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates a node left
 * @tree: the node
 * Return: pointer to new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot, *tmp, *store;

	if (!tree || tree->right)
		return (NULL);
	pivot = tree->right;
	tmp = pivot->left;
	tree->left = tmp;
	tmp->parent = tree;
	pivot->left = tree;
	store = tree->parent;
	tree->parent = pivot;
	pivot->parent = store;
	if (store)
	{
		if (store->left == tree)
			store->left = pivot;
		else
			store->right = pivot;
	}
	return (pivot);
}
