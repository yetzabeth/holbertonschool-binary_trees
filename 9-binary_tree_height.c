#include "binary_trees.h"

size_t
binary_tree_height(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_count = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_count = 1 + binary_tree_height(tree->right);
	if (left_count > right_count)
		return (left_count);

	return (right_count);
}

