#include "binary_trees_h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: the parent of new node
 * @value: value of new node
 * Return: pointer of new node, or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (new);
	new->value = value;
	new->parent = parent;
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
