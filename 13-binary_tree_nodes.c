#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of nodes.
 *
 * Description:
 * This function traverses a binary tree recursively and counts the nodes
 * that have at least one child (left or right). Leaf nodes (nodes with no
 * children) are not included in the count. If the tree is NULL, the function
 * returns 0.
 *
 * Return: The number of nodes in the tree with at least 1 child.
 */
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
