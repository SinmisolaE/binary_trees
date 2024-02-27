#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent of the new node
 * @value: value of the new node
 * Return: pointer to the node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
