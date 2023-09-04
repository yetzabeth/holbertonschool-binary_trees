#include "binary_trees.h"

size_t
binary_tree_height(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		leftCount = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		rightCount = 1 + binary_tree_height(tree->right);
	if (leftCount > rightCount)
		return (leftCount);

	return (right_count);
}

