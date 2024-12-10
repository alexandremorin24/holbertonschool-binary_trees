#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
		size_t left_count = 0, right_count = 0;

		if (tree == NULL)
		return (0);

		if (tree->left == NULL && tree->right == NULL)
			return (0);

		left_count = binary_tree_nodes(tree->left);
		right_count = binary_tree_nodes(tree->right);

		return (1 + left_count + right_count);
}
