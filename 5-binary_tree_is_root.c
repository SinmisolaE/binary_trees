#include "binary_trees.h"

/**
 * binary_tree_is_root - chechks if node is a root
 * @node: the node
 * Return: 1 if True, else 0
 */
int binary_tree_is_root(binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->parent))
		return (1);
	else
		return (0);
}
