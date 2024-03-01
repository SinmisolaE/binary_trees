#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates a node to the right
 * @tree: pointer to the node to rotate
 * Return: the new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot, *tmp, *store;

	if (!tree || !tree->left)
		return (NULL);
	pivot = tree->left;
	tmp = pivot->right;
	tree->left = tmp;
	if (tmp)
		tmp->parent = tree;
	pivot->right = tree;
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
