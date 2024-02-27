#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node
 * @node: pointer to the find to find the sibling
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
{
	if (!node || !(node->parent))
		return (NULL);
	if (node->parent->left == node)
	{
		if (node->parent->right)
			return (node->parent->right);
		else
			return (NULL);
	}
	else if (node->parent->right)
		return (node->parent->right);
	return (NULL);
}
