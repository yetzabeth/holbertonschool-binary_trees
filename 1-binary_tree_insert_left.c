#include "binary_trees.h"

binary_tree_t
*binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->value = value;
	new_node->left = perent->left;
	new_node->right = NULL;
	perent->left = new_node;

	return (new_node);
}