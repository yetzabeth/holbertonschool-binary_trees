#include "binary_trees.h"

size_t
binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree)
		while (tree->parent)
		{
			tree = tree->parent;
			i++;
		}
	return (i);
}
